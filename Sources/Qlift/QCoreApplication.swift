import CQlift


open class QCoreApplication: QObject {
    private var argc = CommandLine.argc

    public init() {
        super.init(ptr: QCoreApplication_new(&argc, CommandLine.unsafeArgv))
    }

    init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr, parent: nil)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QCoreApplication_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    open func exec() -> Int32 {
        return QCoreApplication_exec(self.ptr)
    }

    open func exit(returnCode: Int32) {
        QCoreApplication_exit(self.ptr, returnCode)
    }
}

