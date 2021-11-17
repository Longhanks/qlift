import CQlift


open class QObject {
    var ptr: UnsafeMutableRawPointer!
    private var connection_destroy: UnsafeMutableRawPointer?

    public init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QObject_setSwiftObject(ptr, rawSelf)

        connection_destroy = QObject_destroyed_connect(self.ptr, self.ptr, rawSelf) { raw in
            Unmanaged<QObject>.fromOpaque(raw!).takeUnretainedValue().ptr = nil
        }
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QObject_setSwiftObject(ptr, rawSelf)

        connection_destroy = QObject_destroyed_connect(self.ptr, self.ptr, rawSelf) { raw in
            Unmanaged<QObject>.fromOpaque(raw!).takeUnretainedValue().ptr = nil
        }
    }

    deinit {
        checkDeleteQtObj()
    }

    func checkDeleteQtObj() {
        if self.ptr != nil {
            QObject_clearSwiftObject(self.ptr)
            QObject_destroyed_disconnect(connection_destroy)
            if QObject_parent(ptr) == nil {
                QObject_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public var objectName: String {
        get {
            let s = QObject_objectName(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QObject_setObjectName(ptr, newValue)
        }
    }

    public var parent: QObject? {
        get {
            guard let parentPtr = QObject_parent(ptr) else {
                return nil
            }
            return QObject.swiftQObject(from: parentPtr)
        }
        set { QObject_setParent(ptr, newValue?.ptr) }
    }

    public func dumpObjectInfo() {
        QObject_dumpObjectInfo(ptr)
    }

    public func dumpObjectTree() {
        QObject_dumpObjectTree(ptr)
    }

    static public func swiftQObject(from ptr: UnsafeMutableRawPointer) -> QObject? {
        guard let raw = QObject_getSwiftObject(ptr) else { return nil }
        return Unmanaged<QObject>.fromOpaque(raw).takeUnretainedValue()
    }
}
