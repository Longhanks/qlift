import CQlift


open class QGroupBox: QWidget {
    public var alignment: Qt.Alignment = .AlignLeft {
        didSet {
            QGroupBox_setAlignment(self.ptr, alignment.rawValue)
        }
    }

    public var title: String {
        get {
            return String(cString: QGroupBox_title(self.ptr))
        }
        set(newText) {
            QGroupBox_setTitle(self.ptr, newText)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        super.init(ptr: QGroupBox_new(title, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QGroupBox_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

