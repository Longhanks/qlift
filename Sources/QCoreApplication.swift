import CQlift


class QCoreApplication: QObject {
    private var argc = CommandLine.argc

    init() {
        super.init(ptr: QCoreApplication_new(&argc, CommandLine.unsafeArgv))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            QCoreApplication_delete(self.ptr)
            self.ptr = nil
        }
    }

    func exec() -> Int32 {
        return QCoreApplication_exec(self.ptr)
    }

    func exit(returnCode: Int32) {
        QCoreApplication_exit(self.ptr, returnCode)
    }
}

