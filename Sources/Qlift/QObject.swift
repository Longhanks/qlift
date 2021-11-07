import CQlift


open class QObject {
    public var ptr: UnsafeMutableRawPointer!
    private var parent_ptr: UnsafeMutableRawPointer?
    public weak var parent: QObject?
    private var connection_destroy: UnsafeMutableRawPointer?

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

    public var name: String {
        get {
            let s = QObject_objectName(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QObject_setObjectName(ptr, newValue)
        }
    }

    init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        self.ptr = ptr
        self.parent = parent
        parent_ptr = QObject_parent(ptr)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        connection_destroy = QObject_destroyed_connect(self.ptr, self.ptr, rawSelf) { (raw) in
            if let raw = raw {
                Unmanaged<QObject>.fromOpaque(raw).takeUnretainedValue().ptr = nil
            }
        }
    }

    deinit {
        checkDeleteQtObj()
    }

    func checkDeleteQtObj() {
        if self.ptr != nil {
            QObject_destroyed_disconnect(connection_destroy)
            if parent_ptr == nil {
                QObject_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public func dumpObjectInfo() {
        QObject_dumpObjectInfo(ptr)
    }

    public func dumpObjectTree() {
        QObject_dumpObjectTree(ptr)
    }
}
