import CQlift


open class QMainWindow: QWidget {
    public var centralWidget: QWidget? = nil {
        didSet { QMainWindow_setCentralWidget(self.ptr, centralWidget?.ptr) }
    }

    public var menuBar: QMenuBar {
        get {
            let menuBarPtr = QMainWindow_menuBar(self.ptr)!
            return QObject.swiftObject(from: menuBarPtr, ofType: QMenuBar.self) ??
                QMenuBar(ptr: menuBarPtr)
        }
        set {
            QMainWindow_setMenuBar(self.ptr, newValue.ptr)
        }
    }

    public var statusBar: QStatusBar {
        get {
            let statusBarPtr = QMainWindow_statusBar(ptr)!
            return QObject.swiftObject(from: statusBarPtr, ofType: QStatusBar.self) ??
                QStatusBar(ptr: statusBarPtr)
        }
        set { QMainWindow_setStatusBar(ptr, newValue.ptr) }
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QMainWindow_closeEvent_Override(self.ptr, rawSelf) { context, closeEvent in
            let _self = Unmanaged<QMainWindow>.fromOpaque(context!).takeUnretainedValue()
            _self.closeEvent(event: QCloseEvent(ptr: closeEvent!))
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    open override func closeEvent(event: QCloseEvent) {
        QMainWindow_closeEvent(self.ptr, event.ptr)
    }
}
