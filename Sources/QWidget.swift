import CQlift


open class QWidget: QObject {
    public init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QWidget_new(parent?.ptr, flags))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QWidget_delete(self.ptr)
                self.ptr = nil
            }
        }
    }

    open func show() {
        QWidget_show(self.ptr)
    }
}

