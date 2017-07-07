import CQlift


class QGuiApplication: QCoreApplication {
    private var argc = CommandLine.argc

    override init() {
        super.init(ptr: QGuiApplication_new(&argc, CommandLine.unsafeArgv))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            QGuiApplication_delete(self.ptr)
            self.ptr = nil
        }
    }
}

