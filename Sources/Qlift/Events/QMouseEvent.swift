import CQlift

public class QMouseEvent: QInputEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var button: Qt.MouseButton {
        get { Qt.MouseButton(rawValue: QMouseEvent_button(self.ptr)) }
    }
}
