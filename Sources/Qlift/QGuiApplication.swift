import CQlift


open class QGuiApplication: QCoreApplication {
    private var argc = CommandLine.argc

    public override init() {
        super.init(ptr: QGuiApplication_new(&argc, CommandLine.unsafeArgv))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QGuiApplication_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

