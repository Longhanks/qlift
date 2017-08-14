import CQlift


open class QDialog: QWidget {
    public override init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QDialog_new(parent?.ptr, flags), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QDialog_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    open func exec() -> Int32 {
        return QDialog_exec(self.ptr)
    }

    open func accept() {
        QDialog_accept(self.ptr)
    }

    open func reject() {
        QDialog_reject(self.ptr)
    }
}

