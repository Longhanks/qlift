import CQlift


public class QInputEvent: QEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public func modifiers() -> Qt.KeyboardModifiers {
        .init(rawValue: QInputEvent_modifiers(ptr))
    }

    public func timestamp() -> UInt {
        UInt(QInputEvent_timestamp(ptr))
    }
}

