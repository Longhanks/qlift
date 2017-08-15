import CQlift


open class QFrame: QWidget {
    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QFrame_new(parent?.ptr, flags.rawValue), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QFrame_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

