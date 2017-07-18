import CQlift


open class QVBoxLayout: QBoxLayout {

    public init(parent: QWidget? = nil) {
        super.init(ptr: QVBoxLayout_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QVBoxLayout_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

