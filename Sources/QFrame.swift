import CQlift


open class QFrame: QWidget {
    public override init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QFrame_new(parent?.ptr, flags))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QFrame_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}
