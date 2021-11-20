import CQlift


public class QCloseEvent: QEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QCloseEvent_delete(self.ptr)
            self.ptr = nil
            self.needsDelete = false
        }
    }
}

