import CQlift


open class QGroupBox: QWidget {
    public var alignment: Qt.Alignment {
        get { Qt.Alignment(rawValue: QGroupBox_alignment(ptr)) }
        set { QGroupBox_setAlignment(self.ptr, newValue.rawValue) }
    }

    public var title: String {
        get {
            let s = QGroupBox_title(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QGroupBox_setTitle(self.ptr, newValue)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        super.init(ptr: QGroupBox_new(title, parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}

