import CQlift


open class QLabel: QFrame {
    public var alignment: Qt.Alignments = [.AlignLeft, .AlignVCenter] {
        didSet {
            QLabel_setAlignment(self.ptr, alignment.rawValue)
        }
    }

    public init(text: String = "", parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QLabel_new(text, parent?.ptr, flags))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QLabel_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

