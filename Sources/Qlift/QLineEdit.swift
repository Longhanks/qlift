import CQlift


open class QLineEdit: QWidget {
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QLineEdit_new(text, parent?.ptr), parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }

    var text: String {
        get {
            var len: Int32 = 0
            let s = QLineEdit_text(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QLineEdit_setText(ptr, newValue)
        }
    }

    var placeholderText: String {
        get {
            var len: Int32 = 0
            let s = QLineEdit_placeholderText(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QLineEdit_setPlaceholderText(ptr, newValue)
        }
    }

    var selectedText: String {
        get {
            var len: Int32 = 0
            let s = QLineEdit_selectedText(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
    }
}
