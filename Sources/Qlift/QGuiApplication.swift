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
        checkDeleteQtObj(QGuiApplication_delete)
    }

    static func setAttribute(attribute: Qt.ApplicationAttribute, on: Bool) {
        QGuiApplication_setAttribute(attribute.rawValue, on)
    }

    static func testAttribute(attribute: Qt.ApplicationAttribute) {
        QGuiApplication_testAttribute(attribute.rawValue)
    }

}

