import CQlift


open class QAction: QObject {
    public var text: String {
        get {
            return String(cString: QAction_text(self.ptr))
        }
        set(newText) {
            QAction_setText(self.ptr, newText)
        }
    }

    // Icon not supported at the moment
    public init(text: String? = nil, parent: QObject? = nil) {
        super.init(ptr: QAction_new(nil, text, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QAction_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

