import CQlift


public class QEvent {
    var ptr: UnsafeMutableRawPointer!
    var needsDelete = false

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QEvent_delete(self.ptr)
        }
    }

    public func accept() {
        QEvent_accept(self.ptr)
    }

    public func ignore() {
        QEvent_ignore(self.ptr)
    }
}

