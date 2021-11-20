import CQlift


open class QMessageBox: QDialog {

    public var icon: QMessageBox.Icon {
        get { QMessageBox.Icon(rawValue: QMessageBox_icon(ptr)) }
        set { QMessageBox_setIcon(self.ptr, newValue.rawValue) }
    }

    public var text: String {
        get {
            let s = QMessageBox_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QMessageBox_setText(self.ptr, newValue) }
    }

    public override var windowTitle: String {
        get {
            let s = QMessageBox_windowTitle(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QMessageBox_setWindowTitle(ptr, newValue) }
    }

    public var standardButtons: QMessageBox.StandardButton {
        get { .init(rawValue: QMessageBox_standardButtons(ptr)) }
        set { QMessageBox_setStandardButtons(self.ptr, newValue.rawValue) }
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QMessageBox_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
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
