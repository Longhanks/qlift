import CQlift


open class QLineEdit: QWidget {
    public enum EchoMode: Int32 {
        case Normal
        case NoEcho
        case Password
        case PasswordEchoOnEdit
    }
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QLineEdit_new(text, parent?.ptr), parent: parent)
    }

    deinit {
        QLiftLineEdit_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    public var text: String {
        get {
            let s = QLineEdit_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QLineEdit_setText(ptr, newValue)
        }
    }

    public var placeholderText: String {
        get {
            let s = QLineEdit_placeholderText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QLineEdit_setPlaceholderText(ptr, newValue)
        }
    }

    public var selectedText: String {
        get {
            let s = QLineEdit_selectedText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
    }

    public var alignment: Qt.Alignment {
        get { Qt.Alignment(rawValue: QLineEdit_alignment(ptr)) }
        set { QLineEdit_setAlignment(ptr, newValue.rawValue) }
    }

    public var echoMode: EchoMode {
        get { EchoMode(rawValue: QLineEdit_echoMode(ptr)) ?? .Normal }
        set { QLineEdit_setEchoMode(ptr, newValue.rawValue) }
    }
}
