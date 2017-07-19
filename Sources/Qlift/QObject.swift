import CQlift


open class QObject {
    public var ptr: UnsafeMutableRawPointer!
    public var parent: QObject?

    public init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
        self.parent = parent
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QObject_destroyed_connect(self.ptr, self.ptr, rawSelf, { (raw) in
            if raw != nil {
                Unmanaged<QObject>.fromOpaque(raw!).takeUnretainedValue().ptr = nil
            }
        })
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

