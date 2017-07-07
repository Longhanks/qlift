import CQlift


class QLabel: QWidget {
    var alignment: Int32 = 0 {
        didSet {
            QLabel_setAlignment(self.ptr, alignment)
        }
    }

    init(text: String = "", parent: QWidget?, flags: Int32 = 0) {
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

