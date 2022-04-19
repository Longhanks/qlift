import CQlift

private class ClosureBox {
    public var closure: () -> Void
    init(_ closure: @escaping () -> Void) {
        self.closure = closure
    }
}

open class QTimer: QObject {
    var timeoutCallback: (() -> Void)?

    public init(parent: QWidget? = nil) {
        super.init(ptr: QTimer_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    override func swiftCleanup() {
        super.swiftCleanup()
        timeoutCallback = nil
    }

    public func start(msec: Int32) {
        QTimer_startms(ptr, msec)
    }

    public func start() {
        QTimer_start(ptr)
    }

    public func stop() {
        QTimer_stop(ptr)
    }

    public static func singleShot(msec: Int32, timerType: Qt.TimerType, handler: @escaping () -> Void) {
        let box = ClosureBox(handler)
        let rawClosure = Unmanaged.passRetained(box).toOpaque()
        QTimer_singleShot(msec, timerType.rawValue, rawClosure) { raw in
            let box = Unmanaged<ClosureBox>.fromOpaque(raw).takeRetainedValue()
            box.closure()
        }
    }

    open func connect<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.timeoutCallback = { [weak target] in
            if let target = target { _ = slot(target)() }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QTimer_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw in
            let _self = Unmanaged<QTimer>.fromOpaque(raw).takeUnretainedValue()
            _self.timeoutCallback?()
        }
    }
}
