import CQlift


open class QAction: QObject {
    // Icon not supported at the moment
    public init(text: String? = nil, parent: QObject? = nil) {
        super.init(ptr: QAction_new(nil, text, parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QAction_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

