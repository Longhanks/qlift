import CQlift


open class QApplication: QGuiApplication {
    private var argc = CommandLine.argc

    public override init() {
        super.init(ptr: QApplication_new(&argc, CommandLine.unsafeArgv))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QApplication_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

