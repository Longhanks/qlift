import CQlift


open class QObject {
    public var ptr: UnsafeMutableRawPointer!
    private var parent_ptr: UnsafeMutableRawPointer?
    public weak var parent: QObject?

    public init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
        self.parent = parent
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QObject_destroyed_connect(self.ptr, self.ptr, rawSelf, { (raw) in
            if let raw = raw {
                Unmanaged<QObject>.fromOpaque(raw).takeUnretainedValue().ptr = nil
            }
        })
    }

    public var name: String = "" {
        didSet {
            QObject_setObjectName(ptr, name)
        }
    }

    init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        self.ptr = ptr
        self.parent = parent
        parent_ptr = QObject_parent(ptr)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QObject_destroyed_connect(self.ptr, self.ptr, rawSelf) { (raw) in
            if let raw = raw {
                Unmanaged<QObject>.fromOpaque(raw).takeUnretainedValue().ptr = nil
            }
        }
    }

    deinit {
        checkDeleteQtObj(QObject_delete)
    }

    func checkDeleteQtObj(_ delFunc: (UnsafeMutableRawPointer?) -> Void) {
        if self.ptr != nil {
            if parent_ptr == nil {
                QObject_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}
