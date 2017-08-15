import CQlift


public class QCoreApplication: QObject {
    private var argc = CommandLine.argc
    public static weak var instance: QCoreApplication!

    public init() {
        super.init(ptr: QCoreApplication_new(&argc, CommandLine.unsafeArgv))
        QCoreApplication.instance = self
    }

    init(other: QCoreApplication) {
        super.init(ptr: other.ptr)
        QCoreApplication.instance = other
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QCoreApplication_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public func exec() -> Int32 {
        return QCoreApplication_exec(self.ptr)
    }

    public func exit(returnCode: Int32) {
        QCoreApplication_exit(self.ptr, returnCode)
    }
}

