import CQlift

private class ClosureBox {
    public var closure: () -> Void
    init(_ closure: @escaping () -> Void) {
        self.closure = closure
    }
}

open class QTimer: QObject {
    public static func singleShot(msec: Int32, timerType: Qt.TimerType, handler: @escaping () -> Void) {
        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let box = Unmanaged<ClosureBox>.fromOpaque(raw!).takeUnretainedValue()
                box.closure()
            }
        }
        let rawClosure = Unmanaged.passUnretained(ClosureBox(handler)).toOpaque()
        QTimer_singleShot(msec, timerType.rawValue, rawClosure, functor)
    }
}

