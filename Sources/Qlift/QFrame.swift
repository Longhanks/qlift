import CQlift


open class QFrame: QWidget {
    public enum Shape: Int32 {
        case NoFrame = 0    // no frame
        case Box            // rectangular box
        case Panel          // rectangular panel
        case WinPanel       // rectangular panel (Windows)
        case HLine          // horizontal line
        case VLine          // vertical line
        case StyledPanel    // rectangular panel depending on the GUI style
    }

    public enum Shadow: Int32 {
        case Plain = 0x0010      // plain line
        case Raised = 0x0020     // raised shadow effect
        case Sunken = 0x0030     // sunken shadow effect
    }

    public enum StyleMask: Int32 {
        case Shadow_Mask = 0x00f0      // mask for the shadow
        case Shape_Mask = 0x000f       // mask for the shape
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QFrame_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QFrame_saveSwiftObject(ptr, rawSelf)

        QFrame_sizeHint_Override(ptr) { context in
            let _self = Unmanaged<QWidget>.fromOpaque(context).takeUnretainedValue()
            return _self.sizeHint.ptr
        }

        QFrame_setEventFunctor(ptr) { context, eventType, event in
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
            case CQEvent: return _self.event(event: QEvent(ptr: event))
            default:
                break
            }
            return false
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        QFrame_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }
    
    // MARK: Events

    open override func mouseDoubleClickEvent(event: QMouseEvent) {
        QFrame_mouseDoubleClickEvent(ptr, event.ptr)
    }
    open override func mouseMoveEvent(event: QMouseEvent) {
        QFrame_mouseMoveEvent(ptr, event.ptr)
    }
    open override func mousePressEvent(event: QMouseEvent) {
        QFrame_mousePressEvent(ptr, event.ptr)
    }
    open override func mouseReleaseEvent(event: QMouseEvent) {
        QFrame_mouseReleaseEvent(ptr, event.ptr)
    }
    open override func keyPressEvent(event: QKeyEvent) {
        QFrame_keyPressEvent(ptr, event.ptr)
    }
    open override func keyReleaseEvent(event: QKeyEvent) {
        QFrame_keyReleaseEvent(ptr, event.ptr)
    }
    open override func actionEvent(event: QActionEvent) {
        QFrame_actionEvent(ptr, event.ptr)
    }
    open override func changeEvent(event: QEvent) {
        QFrame_changeEvent(ptr, event.ptr)
    }
    open override func closeEvent(event: QCloseEvent) {
        QFrame_closeEvent(ptr, event.ptr)
    }
    open override func contextMenuEvent(event: QContextMenuEvent) {
        QFrame_contextMenuEvent(ptr, event.ptr)
    }
    open override func enterEvent(event: QEvent) {
        QFrame_enterEvent(ptr, event.ptr)
    }
    open override func focusInEvent(event: QFocusEvent) {
        QFrame_focusInEvent(ptr, event.ptr)
    }
    open override func focusOutEvent(event: QFocusEvent) {
        QFrame_focusOutEvent(ptr, event.ptr)
    }
    open override func hideEvent(event: QHideEvent) {
        QFrame_hideEvent(ptr, event.ptr)
    }
    open override func leaveEvent(event: QEvent) {
        QFrame_leaveEvent(ptr, event.ptr)
    }
    open override func moveEvent(event: QMoveEvent) {
        QFrame_moveEvent(ptr, event.ptr)
    }
    open override func paintEvent(event: QPaintEvent) {
        QFrame_paintEvent(ptr, event.ptr)
    }
    open override func resizeEvent(event: QResizeEvent) {
        QFrame_resizeEvent(ptr, event.ptr)
    }
    open override func showEvent(event: QShowEvent) {
        QFrame_showEvent(ptr, event.ptr)
    }
    open override func tabletEvent(event: QTabletEvent) {
        QFrame_tabletEvent(ptr, event.ptr)
    }
    open override func wheelEvent(event: QWheelEvent) {
        QFrame_wheelEvent(ptr, event.ptr)
    }
    open override func event(event: QEvent) -> Bool {
        QFrame_event(ptr, event.ptr)
    }

    // MARK: Properties
    public var frameShape: Shape {
        get { Shape(rawValue: QFrame_shape(ptr)) ?? .NoFrame }
        set { QFrame_setShape(ptr, newValue.rawValue) }
    }

    public var frameShadow: Shadow {
        get { Shadow(rawValue: QFrame_shadow(ptr)) ?? .Plain }
        set { QFrame_setShadow(ptr, newValue.rawValue) }
    }
       
    public var frameWidth: Int32 {
        QFrame_frameWidth(ptr)
    }
    
    public var lineWidth: Int32 {
        get { QFrame_lineWidth(ptr) }
        set { QFrame_setLineWidth(ptr, newValue) }
    }
    
    public var midLineWidth: Int32 {
        get { QFrame_midLineWidth(ptr) }
        set { QFrame_setMidLineWidth(ptr, newValue) }
    }
    public var frameRect: QRect {
        get { QRect.init(ptr: QFrame_frameRect(ptr)) }
        set { QFrame_setFrameRect(ptr, newValue.ptr) }
    }

    public func setFrameStyle(_ style: Int32) {
        QFrame_setFrameStyle(ptr, style)
    }
    
    public func frameStyle() -> Int32 {
        QFrame_frameStyle(ptr)
    }
}
