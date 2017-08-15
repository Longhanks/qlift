import CQlift


public class QApplication: QGuiApplication {
    private var argc = CommandLine.argc

    public override init() {
        super.init(ptr: QApplication_new(&argc, CommandLine.unsafeArgv))
        QCoreApplication.instance = self
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

