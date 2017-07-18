import CQlift


open class QObject {
    public var ptr: UnsafeMutableRawPointer!
    public var parent: QObject?

    public init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
        self.parent = parent
    }

    init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        self.ptr = ptr
        self.parent = parent
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QObject_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

