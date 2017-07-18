import CQlift


open class QPushButton: QAbstractButton {
    // Icon not supported at the moment
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QPushButton_new(nil, text, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QPushButton_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

