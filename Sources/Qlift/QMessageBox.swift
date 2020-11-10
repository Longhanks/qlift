import CQlift


open class QMessageBox: QDialog {
    public var windowModality: Qt.WindowModality = .ApplicationModal {
        didSet {
            QMessageBox_setWindowModality(self.ptr, windowModality.rawValue)
        }
    }

    override func setWindowTitle() {
        QMessageBox_setWindowTitle(self.ptr, windowTitle)
    }

    public var icon: QMessageBox.Icon = .NoIcon {
        didSet {
            QMessageBox_setIcon(self.ptr, icon.rawValue)
        }
    }

    public var text: String = "" {
        didSet {
            QMessageBox_setText(self.ptr, text)
        }
    }

    public var standardButtons: QMessageBox.StandardButton = .NoButton {
        didSet {
            QMessageBox_setStandardButtons(self.ptr, standardButtons.rawValue)
        }
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QMessageBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QMessageBox_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public func setDefaultStandardButton(_ button: QMessageBox.StandardButton) {
        QMessageBox_setDefaultButtonStandardButton(self.ptr, button.rawValue)
    }

    open func exec() -> QMessageBox.StandardButton {
        return QMessageBox.StandardButton(rawValue: QMessageBox_exec(self.ptr))
    }
}

extension QMessageBox {
    public struct Icon: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let NoIcon: Icon = []
        public static let Information = Icon(rawValue: 1)
        public static let Warning = Icon(rawValue: 2)
        public static let Critical = Icon(rawValue: 3)
        public static let Question = Icon(rawValue: 4)
    }

    public struct StandardButton: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let NoButton: StandardButton = []
        public static let Yes = StandardButton(rawValue: 16384)
        public static let No = StandardButton(rawValue: 65536)
        // Incomplete
    }
}
