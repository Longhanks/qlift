import CQlift


public class QApplication: QGuiApplication {
    public static var desktop: QDesktopWidget!
    private var argc = CommandLine.argc

    public override init() {
        super.init(ptr: QApplication_new(&argc, CommandLine.unsafeArgv))
        QCoreApplication.instance = self
        QApplication.desktop = QDesktopWidget(ptr: QApplication_desktop())
    }

    deinit {
        checkDeleteQtObj()
    }

    @discardableResult
    public func setStyle(_ style: String) -> Bool {
        QApplication_set_style(ptr, style)
    }
}

