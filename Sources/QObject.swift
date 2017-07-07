import CQlift


class QObject {
    var ptr: UnsafeMutableRawPointer?

    init(parent: QObject? = nil) {
        self.ptr = QObject_new(parent?.ptr)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QObject_delete(self.ptr)
            }
        }
    }
}

