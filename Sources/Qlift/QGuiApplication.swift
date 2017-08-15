import CQlift


public class QGuiApplication: QCoreApplication {
    private var argc = CommandLine.argc

    public override init() {
        super.init(other: self)
        self.ptr = QGuiApplication_new(&argc, CommandLine.unsafeArgv)
    }

    override init(other: QCoreApplication) {
        super.init(other: other)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QGuiApplication_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

