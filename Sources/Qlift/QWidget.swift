import CQlift

open class QWidget: QObject {
    public init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QWidget_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QWidget_sizeHint_Override(self.ptr, rawSelf) { context in
            let _self = Unmanaged<QWidget>.fromOpaque(context!).takeUnretainedValue()
            return _self.sizeHint.ptr
        }

        QWidget_mousePressEvent_Override(self.ptr, rawSelf) { context, mouseEvent in
            let _self = Unmanaged<QWidget>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }
    }

    public override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        QWidget_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    public var windowTitle: String {
        get {
            let s = QWidget_windowTitle(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QWidget_setWindowTitle(ptr, newValue) }
    }

    public var maximumSize: QSize {
        get { QSize(ptr: QWidget_maximumSize(ptr)) }
        set { QWidget_setMaximumSize(ptr, newValue.ptr) }
    }

    public var minimumSize: QSize {
        get { QSize(ptr: QWidget_minimumSize(ptr)) }
        set { QWidget_setMinimumSize(ptr, newValue.ptr) }
    }

    open var sizeHint: QSize {
        get { QSize(ptr: QWidget_sizeHint(ptr)) }
    }

    public var sizePolicy: QSizePolicy {
        get { QSizePolicy(ptr: QWidget_sizePolicy(ptr)) }
        set { QWidget_setSizePolicy(ptr, newValue.ptr) }
    }

    public var styleSheet: String {
        get {
            let s = QWidget_styleSheet(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QWidget_setStyleSheet(ptr, newValue) }
    }

    public var geometry: QRect? {
        get { QRect(ptr: QWidget_geometry(ptr)) }
        set { QWidget_setGeometry(ptr, newValue?.ptr) }
    }

    public var enabled: Bool {
        get { QWidget_isEnabled(ptr) }
        set { QWidget_setEnabled(ptr, newValue) }
    }

    public var height: Int32 {
        get { QWidget_height(ptr) }
    }

    public var width: Int32 {
        get { QWidget_width(ptr) }
    }

    public func setPallette(palette: QPalette) {
        QWidget_setPalette(ptr, palette.ptr)
    }

    public var layout: QLayout? {
        didSet {
            layout?.swiftOwership = false
            QWidget_setLayout(ptr, layout?.qtPtr)
        }
    }

    public var pos: QPoint {
        get { QPoint(ptr: QWidget_pos(ptr)) }
    }

    public var rect: QRect {
        get { QRect(ptr: QWidget_rect(ptr)) }
    }

    public var size: QSize {
        get { QSize(ptr: QWidget_size(ptr)) }
    }

    public var frameGeometry: QRect {
        get { QRect(ptr: QWidget_frameGeometry(ptr)) }
    }

    public var isWindow: Bool {
        get { QWidget_isWindow(ptr) }
    }

    public var autoFillBackground: Bool {
        get { QWidget_autoFillBackground(ptr) }
        set { QWidget_setAutoFillBackground(ptr, newValue) }
    }

    public var visible: Bool {
        get { QWidget_isVisible(ptr) }
        set { QWidget_setVisible(ptr, newValue) }
    }

    public var windowModality: Qt.WindowModality {
        get { Qt.WindowModality(rawValue: QWidget_windowModality(ptr)) ?? .NonModal }
        set { QWidget_setWindowModality(ptr, newValue.rawValue) }
    }

    public var isMinimized: Bool {
        QWidget_isMinimized(ptr)
    }

    public var isMaximized: Bool {
        QWidget_isMaximized(ptr)
    }

    public var isFullScreen: Bool {
        QWidget_isFullScreen(ptr)
    }

    public var focus: Bool {
        QWidget_hasFocus(ptr)
    }

    public var focusPolicy: Qt.FocusPolicy {
        get { Qt.FocusPolicy(rawValue: QWidget_focusPolicy(ptr)) }
        set { QWidget_setFocusPolicy(ptr, newValue.rawValue) }
    }

    public var windowIcon: QIcon {
        get { QIcon(ptr: QWidget_windowIcon(ptr)) }
        set { QWidget_setWindowIcon(ptr, newValue.ptr) }
    }

    public var windowIconText: String {
        get {
            let s = QWidget_windowIconText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QWidget_setWindowIconText(ptr, newValue) }
    }

    public func setFocus() {
        QWidget_setFocus(ptr)
    }

    public func clearFocus() {
        QWidget_clearFocus(ptr)
    }

    public func setFocus(reason: Qt.FocusReason) {
        QWidget_setFocusReason(ptr, reason.rawValue)
    }

    public func setWindowState(state: Qt.WindowStates) {
        QWidget_setWindowState(ptr, state.rawValue)
    }

    public func overrideWindowState(state: Qt.WindowStates) {
        QWidget_overrideWindowState(ptr, state.rawValue)
    }

    public var windowState: Qt.WindowStates {
        Qt.WindowStates(rawValue: QWidget_windowState(ptr))
    }

    public func add(action: QAction) {
        QWidget_addAction(ptr, action.ptr)
    }

    open func mousePressEvent(event: QMouseEvent) {
        QWidget_mousePressEvent(ptr, event.ptr)
    }

    public func move(to: QPoint) {
        QWidget_move(ptr, to.ptr)
    }

    public func move(x: Int32, y: Int32) {
        QWidget_movexy(ptr, x, y)
    }

    open func close() -> Bool {
        return QWidget_close(ptr)
    }

    public func resize(width: Int32, height: Int32) {
        QWidget_resize(ptr, width, height)
    }

    public func adjustSize() {
        QWidget_adjustSize(ptr)
    }

    public func setFixedSize(_ size: QSize) {
        QWidget_setFixedSize(ptr, size.ptr)
    }

    open func show() {
        QWidget_show(ptr)
    }

    public func setAttribute(_ attribute: Qt.WidgetAttribute, on: Bool = true) {
        QWidget_setAttribute(ptr, attribute.rawValue, on)
    }

    public func testAttribute(_ attribute: Qt.WidgetAttribute) -> Bool {
        QWidget_testAttribute(ptr, attribute.rawValue)
    }

    public func mapToGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapToGlobal(ptr, point.ptr))
    }
    
    public func mapFromGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFromGlobal(ptr, point.ptr))
    }
    
    public func mapToParent(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapToParent(ptr, point.ptr))
    }
    
    public func mapFromParent(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFromParent(ptr, point.ptr))
    }
    
    public func mapTo(parent: QWidget, point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapTo(ptr, parent.ptr, point.ptr))
    }
    
    public func mapFrom(parent: QWidget, point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFrom(ptr, parent.ptr, point.ptr))
    }

    public func setGraphicsEffect(effect: QGraphicsEffect) {
        QWidget_setGraphicsEffect(ptr, effect.ptr)
    }

    public func update(x: Int32, y: Int32, w: Int32, h: Int32) {
        QWidget_updateXY(ptr, x, y, w, h)
    }

    public func update(rect: QRect) {
        QWidget_updateR(ptr, rect.ptr)
    }

    public func updateGeometry() {
        QWidget_updateGeometry(ptr)
    }

    public func showFullScreen() {
        QWidget_showFullScreen(ptr)
    }

    public func showMaximized() {
        QWidget_showMaximized(ptr)
    }

    public func showMinimized() {
        QWidget_showMinimized(ptr)
    }

    public func showNormal() {
        QWidget_showNormal(ptr)
    }

    public func update() {
        QWidget_update(ptr)
    }

}

extension QWidget {
    public var window: QWidget {
        get {
            var w: QWidget = self
            var p: QWidget? = self.parentWidget()
            while !w.isWindow && p != nil {
                w = p!
                p = p!.parentWidget()
            }
            return w
        }
    }

    private func parentWidget() -> QWidget? {
        guard let parentptr = QObject_parent(ptr) else {
            return nil
        }
        return QObject.swiftQObject(from: parentptr) as? QWidget
    }
}
