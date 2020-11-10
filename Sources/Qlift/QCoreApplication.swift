import CQlift


public class QCoreApplication: QObject {
    private var argc = CommandLine.argc
    public static weak var instance: QCoreApplication!

    public init() {
        super.init(ptr: QCoreApplication_new(&argc, CommandLine.unsafeArgv))
        QCoreApplication.instance = self
    }

    init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QCoreApplication_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public func quit() {
        exit(returnCode: 0)
    }

    public func exec() -> Int32 {
        return QCoreApplication_exec()
    }

    public func exit(returnCode: Int32) {
        QCoreApplication_exit(returnCode)
    }
}
