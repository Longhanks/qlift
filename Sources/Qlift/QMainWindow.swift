import CQlift


open class QMainWindow: QWidget {

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QMainWindow_saveSwiftObject(ptr, rawSelf)

        QMainWindow_setEventFunctor(ptr) { context, eventType, event in
            let _self = Unmanaged<QWidget>.fromOpaque(context).takeUnretainedValue()
            switch eventType {
            case CQmousePressEvent: _self.mousePressEvent(event: QMouseEvent(ptr: event))
            case CQmouseDoubleClickEvent: _self.mouseDoubleClickEvent(event: QMouseEvent(ptr: event))
            case CQmouseMoveEvent: _self.mouseMoveEvent(event: QMouseEvent(ptr: event))
            case CQmousePressEvent: _self.mousePressEvent(event: QMouseEvent(ptr: event))
            case CQmouseReleaseEvent: _self.mouseReleaseEvent(event: QMouseEvent(ptr: event))
            case CQkeyPressEvent: _self.keyPressEvent(event: QKeyEvent(ptr: event))
            case CQkeyReleaseEvent: _self.keyReleaseEvent(event: QKeyEvent(ptr: event))
            case CQactionEvent: _self.actionEvent(event: QActionEvent(ptr: event))
            case CQchangeEvent: _self.changeEvent(event: QEvent(ptr: event))
            case CQcloseEvent: _self.closeEvent(event: QCloseEvent(ptr: event))
            case CQcontextMenuEvent: _self.contextMenuEvent(event: QContextMenuEvent(ptr: event))
            case CQenterEvent: _self.enterEvent(event: QEvent(ptr: event))
            case CQfocusInEvent: _self.focusInEvent(event: QFocusEvent(ptr: event))
            case CQfocusOutEvent: _self.focusOutEvent(event: QFocusEvent(ptr: event))
            case CQhideEvent: _self.hideEvent(event: QHideEvent(ptr: event))
            case CQleaveEvent: _self.leaveEvent(event: QEvent(ptr: event))
            case CQmoveEvent: _self.moveEvent(event: QMoveEvent(ptr: event))
            case CQpaintEvent: _self.paintEvent(event: QPaintEvent(ptr: event))
            case CQresizeEvent: _self.resizeEvent(event: QResizeEvent(ptr: event))
            case CQshowEvent: _self.showEvent(event: QShowEvent(ptr: event))
            case CQtabletEvent: _self.tabletEvent(event: QTabletEvent(ptr: event))
            case CQwheelEvent: _self.wheelEvent(event: QWheelEvent(ptr: event))
            default:
                break
            }
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        QMainWindow_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    // MARK: Events

    override open func mouseDoubleClickEvent(event: QMouseEvent) {
        QMainWindow_mouseDoubleClickEvent(ptr, event.ptr)
    }
    override open func mouseMoveEvent(event: QMouseEvent) {
        QMainWindow_mouseMoveEvent(ptr, event.ptr)
    }
    override open func mousePressEvent(event: QMouseEvent) {
        QMainWindow_mousePressEvent(ptr, event.ptr)
    }
    override open func mouseReleaseEvent(event: QMouseEvent) {
        QMainWindow_mouseReleaseEvent(ptr, event.ptr)
    }
    override open func keyPressEvent(event: QKeyEvent) {
        QMainWindow_keyPressEvent(ptr, event.ptr)
    }
    override open func keyReleaseEvent(event: QKeyEvent) {
        QMainWindow_keyReleaseEvent(ptr, event.ptr)
    }
    override open func actionEvent(event: QActionEvent) {
        QMainWindow_actionEvent(ptr, event.ptr)
    }
    override open func changeEvent(event: QEvent) {
        QMainWindow_changeEvent(ptr, event.ptr)
    }
    override open func closeEvent(event: QCloseEvent) {
        QMainWindow_closeEvent(ptr, event.ptr)
    }
    override open func contextMenuEvent(event: QContextMenuEvent) {
        QMainWindow_contextMenuEvent(ptr, event.ptr)
    }
    override open func enterEvent(event: QEvent) {
        QMainWindow_enterEvent(ptr, event.ptr)
    }
    override open func focusInEvent(event: QFocusEvent) {
        QMainWindow_focusInEvent(ptr, event.ptr)
    }
    override open func focusOutEvent(event: QFocusEvent) {
        QMainWindow_focusOutEvent(ptr, event.ptr)
    }
    override open func hideEvent(event: QHideEvent) {
        QMainWindow_hideEvent(ptr, event.ptr)
    }
    override open func leaveEvent(event: QEvent) {
        QMainWindow_leaveEvent(ptr, event.ptr)
    }
    override open func moveEvent(event: QMoveEvent) {
        QMainWindow_moveEvent(ptr, event.ptr)
    }
    override open func paintEvent(event: QPaintEvent) {
        QMainWindow_paintEvent(ptr, event.ptr)
    }
    override open func resizeEvent(event: QResizeEvent) {
        QMainWindow_resizeEvent(ptr, event.ptr)
    }
    override open func showEvent(event: QShowEvent) {
        QMainWindow_showEvent(ptr, event.ptr)
    }
    override open func tabletEvent(event: QTabletEvent) {
        QMainWindow_tabletEvent(ptr, event.ptr)
    }
    override open func wheelEvent(event: QWheelEvent) {
        QMainWindow_wheelEvent(ptr, event.ptr)
    }

    // MARK: Propeties

    public var centralWidget: QWidget? {
        get {
            guard let centralWidgetPtr = QMainWindow_centralWidget(self.ptr) else {
                return nil
            }
            return QObject.swiftObject(from: centralWidgetPtr, ofType: QWidget.self)
        }

        set { QMainWindow_setCentralWidget(self.ptr, newValue?.ptr) }
    }

    public var menuBar: QMenuBar {
        get {
            let menuBarPtr = QMainWindow_menuBar(self.ptr)
            return QObject.swiftObject(from: menuBarPtr, ofType: QMenuBar.self) ??
            QMenuBar(ptr: menuBarPtr)
        }
        set { QMainWindow_setMenuBar(self.ptr, newValue.ptr) }
    }

    public var statusBar: QStatusBar {
        get {
            let statusBarPtr = QMainWindow_statusBar(ptr)
            return QObject.swiftObject(from: statusBarPtr, ofType: QStatusBar.self) ??
            QStatusBar(ptr: statusBarPtr)
        }
        set { QMainWindow_setStatusBar(ptr, newValue.ptr) }
    }

}
