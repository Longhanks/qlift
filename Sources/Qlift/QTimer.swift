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
        super.init(ptr: QTimer_new(parent?.ptr), parent: parent)
    }

    init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
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
        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let box = Unmanaged<ClosureBox>.fromOpaque(raw!).takeRetainedValue()
                box.closure()
            }
        }
        let box = ClosureBox(handler)
        let rawClosure = Unmanaged.passRetained(box).toOpaque()
        QTimer_singleShot(msec, timerType.rawValue, rawClosure, functor)
    }
}

extension QTimer {
    open func connect(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.timeoutCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let _self = Unmanaged<QTimer>.fromOpaque(raw!).takeUnretainedValue()
                _self.timeoutCallback!()
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QTimer_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}
