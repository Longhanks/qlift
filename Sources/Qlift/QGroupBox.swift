import CQlift


open class QGroupBox: QWidget {
    public var alignment: Qt.Alignment = .AlignLeft {
        didSet {
            QGroupBox_setAlignment(self.ptr, alignment.rawValue)
        }
    }

    public var title: String = "" {
        didSet {
            QGroupBox_setTitle(self.ptr, title)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        self.title = title
        super.init(ptr: QGroupBox_new(title, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

