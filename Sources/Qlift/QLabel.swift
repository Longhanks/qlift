import CQlift


open class QLabel: QFrame {
    public var alignment: Qt.Alignment = [.AlignLeft, .AlignVCenter] {
        didSet {
            QLabel_setAlignment(self.ptr, alignment.rawValue)
        }
    }

    public var text: String {
        get {
            return String(cString: QLabel_text(self.ptr))
        }
        set(newText) {
            QLabel_setText(self.ptr, newText)
        }
    }

    public init(text: String = "", parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QLabel_new(text, parent?.ptr, flags.rawValue), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QLabel_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

