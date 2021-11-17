import CQlift


open class QMainWindow: QWidget {
    public var centralWidget: QWidget? = nil {
        didSet {
            QMainWindow_setCentralWidget(self.ptr, centralWidget?.ptr)
        }
    }

    private var _menuBar: QMenuBar? = nil
    private var _statusBar: QStatusBar? = nil

    public var menuBar: QMenuBar! {
        get {
            if self._menuBar == nil {
                self._menuBar = QMenuBar(ptr: QMainWindow_menuBar(self.ptr))
            }
            return self._menuBar!
        }
        set {
            QMainWindow_setMenuBar(self.ptr, newValue?.ptr)
            self._menuBar = newValue
        }
    }

    public var statusBar: QStatusBar! {
        get {
            if _statusBar == nil {
                _statusBar = QStatusBar(ptr: QMainWindow_statusBar(self.ptr))
            }
            return self._statusBar!
        }
        set {
            QMainWindow_setStatusBar(ptr, newValue?.ptr)
            self._statusBar = newValue
        }
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functor: @convention(c) (UnsafeMutableRawPointer?, UnsafeMutableRawPointer?) -> Void = { context, closeEvent in
            let _self = Unmanaged<QMainWindow>.fromOpaque(context!).takeUnretainedValue()
            _self.closeEvent(event: QCloseEvent(ptr: closeEvent!))
        }

        QMainWindow_closeEvent_Override(self.ptr, rawSelf, functor)
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    open func closeEvent(event: QCloseEvent) {
        QMainWindow_closeEvent(self.ptr, event.ptr)
    }
}
