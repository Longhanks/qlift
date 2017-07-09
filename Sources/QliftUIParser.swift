import Foundation


class QliftUIParser: NSObject {
    var content: String = ""

    func parseUI(_ xml: String) -> String {
        let parser = XMLParser(data: xml.data(using: .utf8)!)
        parser.delegate = self
        print("Starting parse")
        print(parser.parse())
        print("Returning: \(content)")
        return content
    }
}

extension QliftUIParser: XMLParserDelegate {
    func parser(_ parser: XMLParser, didStartElement: String, namespaceURI: String?, qualifiedName: String?, attributes: [String : String] = [:]) {
        content += "Started element: \(didStartElement)\n"
        content += "Attributes: \(attributes)\n"
    }

    func parser(_ parser: XMLParser, didEndElement: String, namespaceURI: String?, qualifiedName: String?) {
        content += "Ended element: \(didEndElement)\n"
    }

    func parser(_ parser: XMLParser, foundCharacters: String) {
        let trimmed = foundCharacters.trimmingCharacters(in: .whitespacesAndNewlines)
        if !trimmed.isEmpty {
            content += "Found characters: \(trimmed)\n"
        }
    }
}


// let parser = QliftUIParser()
//
// guard let document = try? String(contentsOf: URL(fileURLWithPath: CommandLine.arguments[1], isDirectory: false)) else {
//     print("Couldn't read file")
//     exit(0)
// }
//
// print(parser.parseUI(document))

