import CQlift


open class QMenuBar: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QMenuBar_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QMenuBar_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

