import CQlift


public class QGuiApplication: QCoreApplication {
    private var argc = CommandLine.argc

    public override init() {
        super.init(ptr: QGuiApplication_new(&argc, CommandLine.unsafeArgv))
        QCoreApplication.instance = self
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public static func setAttribute(_ attribute: Qt.ApplicationAttribute, on: Bool = true) {
        QGuiApplication_setAttribute(attribute.rawValue, on)
    }

    public static func testAttribute(_ attribute: Qt.ApplicationAttribute) -> Bool {
        QGuiApplication_testAttribute(attribute.rawValue)
    }

}

