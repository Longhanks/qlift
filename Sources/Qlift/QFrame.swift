import CQlift


open class QFrame: QWidget {
    public override init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QFrame_new(parent?.ptr, flags), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QFrame_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

