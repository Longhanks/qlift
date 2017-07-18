import CQlift


open class QObject {
    public var ptr: UnsafeMutableRawPointer?

    public init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QObject_delete(self.ptr)
            }
        }
    }
}

