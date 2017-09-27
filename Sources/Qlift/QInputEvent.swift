import CQlift


public class QInputEvent: QEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QInputEvent_delete(self.ptr)
            self.ptr = nil
            self.needsDelete = false
        }
    }
}

