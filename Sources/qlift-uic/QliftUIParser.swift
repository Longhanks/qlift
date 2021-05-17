import Foundation
#if canImport(FoundationXML)
import FoundationXML
#endif


public class QliftUIParser: NSObject {
    private var rootNode = Node(parent: nil, text: "root")
    private var currentNode: Node?
    private var namesOfQMenusForAddAction = [String]()
    private var widgetCount = 1


    public func parseUI(data: Data) -> String? {
        let parser = XMLParser(data: data)
        parser.delegate = self

        if !parser.parse() {
            return nil
        }

        return node2Swift(node: rootNode)
    }

    private func node2Swift(node: Node) -> String {
        var swiftUI = "import Qlift\n\n\n"
        let ui = node.children[0].children
        var rootWidgetNode: Node? = nil

        for node in ui {
            if node.text == "widget" {
                rootWidgetNode = node
            }
        }

        let baseClass = rootWidgetNode!.attributes["class"]!
        let className = rootWidgetNode!.attributes["name"]!
        swiftUI += "class " + className + ": " + baseClass + " {\n"
        rootWidgetNode!.attributes["name"] = "self"
        let properties = InstancePropertyNodeFinder().getInstancePropertyNodes(root: rootWidgetNode!)
        for property in properties {
            var cls = ""
            if property.attributes["class"] != nil {
                cls = property.attributes["class"]!
            }
            else if property.text == "spacer" {
                cls = "QSpacerItem"
            }
            else if property.text == "action" {
                cls = "QAction"
            }
            if property.attributes["name"]!.isEmpty {
                property.attributes["name"] = "widget\(widgetCount)"
                widgetCount += 1
            }
            swiftUI += "    var " + property.attributes["name"]! + ": " + cls + "!\n"
        }

        swiftUI += """

            override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
                super.init(parent: parent, flags: flags)

        """

        // 1. Actions
        for node in rootWidgetNode!.children.filter({ $0.text == "action" }) {
            swiftUI += subNode2Swift(node: node)
        }

        // 2. Everything except actions
        for node in rootWidgetNode!.children.filter({ $0.text != "action" }) {
            swiftUI += subNode2Swift(node: node)
        }
        swiftUI += preextractContentsMargins(node: rootWidgetNode!)

        // 3. Connections
        let connectionsNodes = ui.filter({ $0.text == "connections" })
        if connectionsNodes.count > 0 {
            for connection in connectionsNodes[0].children {
                let sender = connection.children[0].value
                let signalWithBraces = connection.children[1].value.capitalized
                let signal = String(signalWithBraces[..<signalWithBraces.index(signalWithBraces.endIndex, offsetBy: -2)])
                var receiver = connection.children[2].value
                if receiver == className {
                    receiver = "self"
                }
                let slotWithBraces = connection.children[3].value
                let slot = String(slotWithBraces[..<slotWithBraces.index(slotWithBraces.endIndex, offsetBy: -2)])
                swiftUI += "        \(sender).connect\(signal)(to: \(receiver).\(slot))\n"
            }
        }

        swiftUI += "    }\n"
        swiftUI += "}\n"
        return swiftUI
    }

    private func preextractContentsMargins(node: Node) -> String {
        var left = -1
        var top = -1
        var right = -1
        var bottom = -1
        var foundOneMargin = false

        for subNode in node.children where subNode.text == "property" {
            switch subNode.attributes["name"]! {
            case "leftMargin":
                left = Int(subNode.children[0].value)!
                foundOneMargin = true
            case "topMargin":
                top = Int(subNode.children[0].value)!
                foundOneMargin = true
            case "rightMargin":
                right = Int(subNode.children[0].value)!
                foundOneMargin = true
            case "bottomMargin":
                bottom = Int(subNode.children[0].value)!
                foundOneMargin = true
            default:
                continue
            }
        }

        guard foundOneMargin else {
            return ""
        }

        return "        \(node.attributes["name"]!).contentsMargins = QMargins(left: \(left), top: \(top), right: \(right), bottom: \(bottom))\n"
    }

    private func subNode2Swift(node: Node) -> String {
        var ui = ""

        switch node.text {
        case "property":
            switch node.attributes["name"]! {
            case "palette", "icon":
                // TODO: Pallette make
                break
            case "sizePolicy":
                break;
            case "pixmap":
                ui += "        \(node.parent!.attributes["name"]!).setPixmap(pixmap: QPixmap(fileName: \(propertyNode2Swift(node: node.children[0]))))\n"
            case "iconSize":
                ui += "        \(node.parent!.attributes["name"]!).setIconSize(size: \(propertyNode2Swift(node: node.children[0])))\n"
            case "autoFillBackground":
                ui += "        \(node.parent!.attributes["name"]!).autoFillBackground = \(propertyNode2Swift(node: node.children[0]))\n"
            case "flat":
                ui += "        \(node.parent!.attributes["name"]!).isFlat = \(propertyNode2Swift(node: node.children[0]))\n"
            case "leftMargin", "topMargin", "rightMargin", "bottomMargin":
                break
            default:
                let parentTag = node.parent!.text
                if parentTag == "item" {
                    ui += "        \(node.parent!.parent!.attributes["name"]!).add(item: \(propertyNode2Swift(node: node.children[0])))\n"
                } else {
                    ui += "        \(node.parent!.attributes["name"]!).\(node.attributes["name"]!) = \(propertyNode2Swift(node: node.children[0]))\n"
                }
            }
        case "addaction":
            var actionName = node.attributes["name"]!
            if actionName == "separator" {
                ui += "        \(node.parent!.attributes["name"]!).addSeparator()\n"
            } else if namesOfQMenusForAddAction.contains(actionName) {
                actionName = actionName + ".menuAction()"
                ui += "        \(node.parent!.attributes["name"]!).add(action: \(actionName))\n"
            } else {
                ui += "        \(node.parent!.attributes["name"]!).add(action: \(actionName))\n"
            }
        case "action":
            ui += "        \(node.attributes["name"]!) = QAction(parent: \(node.parent!.attributes["name"]!))\n"
            for subNode in node.children {
                ui += subNode2Swift(node: subNode)
            }
        case "widget":
            // 1. Determine if constructor should be passed a parent variable.
            var parentName = "nil"
            if let parentWidget = getParentWidget(node: node) {
                parentName = parentWidget.attributes["name"]!
            }
            // 2. Construct widget itself.
            ui += "        \(node.attributes["name"]!) = \(node.attributes["class"]!)(parent: \(parentName))\n"


            // 3. Handle special cases: QMenuBar, QMenu, QToolBar, QStatusBar, QDockWidget
            switch node.attributes["class"]! {

            case "QMenuBar":
                for subNode in node.children {
                    ui += subNode2Swift(node: subNode)
                }
                ui += "        \(node.parent!.attributes["name"]!).menuBar = \(node.attributes["name"]!)\n"

            case "QMenu":
                namesOfQMenusForAddAction.append(node.attributes["name"]!)
                for subNode in node.children {
                    ui += subNode2Swift(node: subNode)
                }

            case "QToolBar":
                var area = ""
                for subNode in node.children.filter({ $0.text == "attribute" }) {
                    if subNode.attributes["name"]! == "toolBarArea" {
                        let val = subNode.children[0].value
                        area = "." + String(val[..<val.index(val.endIndex, offsetBy: -"ToolBarArea".count)])
                    }
                }
                for subNode in node.children.filter({ $0.text != "attribute" }) {
                    ui += subNode2Swift(node: subNode)
                }
                ui += "        \(node.parent!.attributes["name"]!).add(toolBar: \(node.attributes["name"]!), area: \(area))\n"

            case "QStatusBar":
                ui += "        \(node.parent!.attributes["name"]!).statusBar = \(node.attributes["name"]!)\n"

            case "QDockWidget":
                var areaNumberString = ""
                for subNode in node.children.filter({ $0.text == "attribute" }) {
                    if subNode.attributes["name"]! == "dockWidgetArea" {
                        areaNumberString = subNode.children[0].value
                    }
                }
                for subNode in node.children.filter({ $0.text != "attribute" }) {
                    ui += subNode2Swift(node: subNode)
                }
                var area = ""
                switch Int(areaNumberString)! {
                    case 0:
                        area = ".No"
                    case 1:
                        area = ".Left"
                    case 2:
                        area = ".Right"
                    case 4:
                        area = ".Top"
                    case 8:
                        area = ".Botom"
                    case 15:
                        area = ".All"
                    default:
                        print("Unknown dock area")
                }
                ui += "        \(node.parent!.attributes["name"]!).add(dockWidget: \(node.attributes["name"]!), area: \(area))\n"

            // 4. Handle generic QWidget
            default:
                // Recurse children
                for subNode in node.children {
                    ui += subNode2Swift(node: subNode)
                }

                // Determine if parent is item (in layout) -> needs to add the widget to the layout via add(item:)
                if node.parent!.text == "item" {
                    ui += "        \(node.parent!.parent!.attributes["name"]!).add(widget: \(node.attributes["name"]!))\n"
                }

                // Determine if parent is a QDockWidget or QMainWindow -> needs to set widget / centralWidget
                else {
                    switch node.parent!.attributes["class"] {
                    case "QDockWidget"?:
                        ui += "        \(node.parent!.attributes["name"]!).widget = \(node.attributes["name"]!)\n"
                    case "QMainWindow"?:
                        ui += "        \(node.parent!.attributes["name"]!).centralWidget = \(node.attributes["name"]!)\n"
                    default:
                        break
                    }
                }
            }
        case "layout":
            ui += "        \(node.attributes["name"]!) = \(node.attributes["class"]!)(parent: "
            if node.parent!.text == "widget" {
                ui += node.parent!.attributes["name"]!
            } else {
                ui += "nil"
            }
            ui += ")\n"
            for subNode in node.children {
                ui += subNode2Swift(node: subNode)
            }
            if node.parent!.text == "item" {
                ui += "        \(node.parent!.parent!.attributes["name"]!).add(layout: \(node.attributes["name"]!))\n"
            }

        case "item":
            for subNode in node.children {
                ui += subNode2Swift(node: subNode)
            }
        case "spacer":
            ui += spacerNode2Swift(node: node)
        default:
            ui += "        \(node.description)\n"
        }

        ui += preextractContentsMargins(node: node)

        return ui
    }

    private func getParentWidget(node: Node) -> Node? {
        guard let parent = node.parent else {
            return nil
        }
        if parent.attributes["class"] != nil {
            if parent.attributes["class"]! == "QDockWidget" {
                return nil
            }
        }
        var current = parent
        while current.text != "widget" {
            guard let parent = current.parent else {
                return nil
            }
            current = parent
        }
        return current
    }

    private func propertyNode2Swift(node: Node) -> String {
        switch node.text {
        case "string", "pixmap":
            guard
                node.attributes.first?.key == "notr",
                node.attributes.first?.value == "true" else {
                return "\"" + node.value + "\""
            }
            return "\"\"\"\n" + node.value + "\n\"\"\""

        case "enum":
            return "." + node.value.components(separatedBy: "::").last!

        case "set":
            var separated = node.value.components(separatedBy: "|")
            for (index, element) in separated.enumerated() {
                let enumCase = element.components(separatedBy: "::").last!
                separated[index] = "." + enumCase
            }
            if separated.count > 1 {
                return "[\(separated.joined(separator: ", "))]"
            } else {
                return separated[0]
            }

        case "bool", "number":
            return node.value

        case "rect":
            var x = 0
            var y = 0
            var width = 0
            var height = 0
            for child in node.children {
                switch child.text {
                    case "x":
                        x = Int(child.value)!
                    case "y":
                        y = Int(child.value)!
                    case "width":
                        width = Int(child.value)!
                    case "height":
                        height = Int(child.value)!
                    default:
                        print("unknown rect:", child.text)
                }
            }
            return "QRect(x: \(x), y: \(y), width: \(width), height: \(height))"

        case "size":
            var width = 0
            var height = 0
            for child in node.children {
                switch child.text {
                case "width":
                    width = Int(child.value)!
                case "height":
                    height = Int(child.value)!
                default:
                    print("unknown size:", child.text)
                }
            }
            return "QSize(width: \(width), height: \(height))"

        default:
            return node.text
        }

    }

    private func spacerNode2Swift(node: Node) -> String {
        var ui = ""
        var width: Int = 0
        var height: Int = 0
        var horizontalPolicy: String = ""
        var verticalPolicy: String = ""
        for subNode in node.children {
            if subNode.attributes["name"]! == "orientation" {
                if subNode.children[0].value == "Qt::Horizontal" {
                    horizontalPolicy = ".Expanding"
                    verticalPolicy = ".Minimum"
                } else if subNode.children[0].value == "Qt::Vertical" {
                    horizontalPolicy = ".Minimum"
                    verticalPolicy = ".Expanding"
                }
            }
            else if subNode.attributes["name"]! == "sizeHint" {
                let sizeNode = subNode.children[0]
                for sizeSubNode in sizeNode.children {
                    if sizeSubNode.text == "width" {
                        width = Int(sizeSubNode.value)!
                    } else if sizeSubNode.text == "height" {
                        height = Int(sizeSubNode.value)!
                    }
                }
            }
        }

        ui += "        \(node.attributes["name"]!) = QSpacerItem(width: \(width), height: \(height), horizontalPolicy: \(horizontalPolicy), verticalPolicy: \(verticalPolicy))\n"
        ui += "        \(node.parent!.parent!.attributes["name"]!).add(item: \(node.attributes["name"]!))\n"
        return ui
    }
}

fileprivate class InstancePropertyNodeFinder {
    private var propertyNodes = [Node]()

    func getInstancePropertyNodes(root node: Node) -> [Node] {
        traverse(node: node)
        return propertyNodes
    }

    private func traverse(node: Node) {
        for subNode in node.children {
            if subNode.text == "widget" || subNode.text == "layout" || subNode.text == "spacer" || subNode.text == "action" {
                propertyNodes.append(subNode)
            }
            traverse(node: subNode)
        }
    }
}


fileprivate class Node {
    weak var parent: Node?
    var text: String
    var children = [Node]()
    var value: String = ""
    var attributes = [String: String]()
    init(parent: Node?, text: String) {
        self.parent = parent
        self.text = text
    }
}

extension Node: CustomStringConvertible {
    var description: String {
        return text + ": " + (value.isEmpty ? children.description : value)
    }
}

extension QliftUIParser: XMLParserDelegate {
    public func parserDidStartDocument(_ parser: XMLParser) {
        currentNode = rootNode
    }

    public func parser(_ parser: XMLParser, didStartElement element: String, namespaceURI: String?, qualifiedName: String?, attributes: [String: String] = [:]) {
        let node = Node(parent: currentNode!, text: element)
        node.attributes = attributes
        currentNode!.children.append(node)
        currentNode = node
    }

    public func parser(_ parser: XMLParser, didEndElement element: String, namespaceURI: String?, qualifiedName: String?) {
        guard let hasParent = currentNode!.parent else {
            currentNode = rootNode
            return
        }
        currentNode = hasParent
    }

    public func parser(_ parser: XMLParser, foundCharacters: String) {
        let trimmed = foundCharacters.trimmingCharacters(in: .whitespacesAndNewlines)
        if !trimmed.isEmpty {
            currentNode!.value += trimmed
        }
    }
}
