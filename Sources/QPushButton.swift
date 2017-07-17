import CQlift


open class QPushButton: QAbstractButton {
    // Icon not supported at the moment
    public convenience init(text: String = "", parent: QWidget? = nil) {
        self.init(ptr: QPushButton_new(nil, text, parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QPushButton_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

