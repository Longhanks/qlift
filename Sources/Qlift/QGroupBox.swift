import CQlift


open class QGroupBox: QWidget {
    public var alignment: Qt.Alignment = .AlignLeft {
        didSet {
            QGroupBox_setAlignment(self.ptr, alignment.rawValue)
        }
    }

    public var title: String {
        get {
            var len: Int32 = 0
            let s = QGroupBox_title(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QGroupBox_setTitle(self.ptr, newValue)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        super.init(ptr: QGroupBox_new(title, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

