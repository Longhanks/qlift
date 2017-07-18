import CQlift


open class QHBoxLayout: QBoxLayout {

    public init(parent: QWidget? = nil) {
        super.init(ptr: QHBoxLayout_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QHBoxLayout_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

