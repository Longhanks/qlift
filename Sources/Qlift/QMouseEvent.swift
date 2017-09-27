import CQlift


public class QMouseEvent: QInputEvent {
    public var button: Qt.MouseButton {
        get {
            return Qt.MouseButton(rawValue: QMouseEvent_button(self.ptr))
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QMouseEvent_delete(self.ptr)
            self.ptr = nil
            self.needsDelete = false
        }
    }
}

