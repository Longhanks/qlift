import CQlift


open class QAction: QObject {
    var triggeredCallback: ((Bool) -> Void)?


    // Icon not supported at the moment
    public init(text: String = "", parent: QObject? = nil) {
        super.init(ptr: QAction_new(nil, text, parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
    
    override func swiftCleanup() {
        super.swiftCleanup()
        triggeredCallback = nil
    }

    public var text: String {
        get {
            let s = QAction_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QAction_setText(self.ptr, newValue) }
    }

    open func connectTriggered<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Bool>) {
        self.triggeredCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAction_triggered_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, checked in
            let _self = Unmanaged<QAction>.fromOpaque(raw).takeUnretainedValue()
            _self.triggeredCallback?(checked)
        }
    }
}

