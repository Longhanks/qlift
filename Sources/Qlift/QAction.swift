import CQlift


open class QAction: QObject {
    var triggeredCallback: ((Bool) -> Void)?

    public var text: String {
        get {
            var len: Int32 = 0
            let s = QAction_text(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QAction_setText(self.ptr, newValue)
        }
    }

    // Icon not supported at the moment
    public init(text: String = "", parent: QObject? = nil) {
        super.init(ptr: QAction_new(nil, text, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }

    open func connectTriggered(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.triggeredCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Bool) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAction>.fromOpaque(raw!).takeUnretainedValue()
                _self.triggeredCallback!(checked)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAction_triggered_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

