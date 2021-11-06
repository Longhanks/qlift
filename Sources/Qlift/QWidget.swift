import CQlift


open class QWidget: QObject {
    public var windowTitle: String {
        get {
            var len: Int32 = 0
            let s = QWidget_windowTitle(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QWidget_setWindowTitle(self.ptr, newValue)
        }
    }

    func setWindowTitle() {
        QWidget_setWindowTitle(self.ptr, windowTitle)
    }

    public var maximumSize: QSize {
        get { QSize(ptr: QWidget_maximumSize(self.ptr)) }
        set { QWidget_setMaximumSize(self.ptr, newValue.ptr) }
    }

    public var minimumSize: QSize {
        get { QSize(ptr: QWidget_minimumSize(self.ptr)) }
        set { QWidget_setMinimumSize(self.ptr, newValue.ptr) }
    }

    open var sizeHint: QSize {
        get { QSize(ptr: QWidget_sizeHint(self.ptr)) }
    }

    public var sizePolicy: QSizePolicy {
        get { QSizePolicy(ptr: QWidget_sizePolicy(self.ptr)) }
        set { QWidget_setSizePolicy(self.ptr, newValue.ptr) }
    }

    public var styleSheet: String {
        get {
            var len: Int32 = 0
            let s = QWidget_styleSheet(self.ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set { QWidget_setStyleSheet(self.ptr, newValue) }
    }

    public var geometry: QRect? {
        get { QRect(ptr: QWidget_geometry(self.ptr)) }
        set { QWidget_setGeometry(self.ptr, newValue?.ptr) }
    }

    public var enabled: Bool {
        get { QWidget_isEnabled(self.ptr) }
        set { QWidget_setEnabled(ptr, newValue) }
    }

    public var height: Int32 {
        get { QWidget_height(self.ptr) }
    }

    public var width: Int32 {
        get { QWidget_width(self.ptr) }
    }

    public func setPallette(palette: QPalette) {
        QWidget_setPalette(ptr, palette.ptr)
    }

    private var _layout: QLayout? = nil

    public var layout: QLayout? {
        get {
            return self._layout
        }
        set {
            guard let newLayout = newValue else {
                self._layout = nil
                QWidget_setLayout(self.ptr, nil)
                return
            }

            self._layout = newLayout
            self._layout!.needsDelete = false
            QWidget_setLayout(self.ptr, self._layout!.ptr)
        }
    }

    public var pos: QPoint {
        get { QPoint(ptr: QWidget_pos(self.ptr)) }
    }

    public var rect: QRect {
        get { QRect(ptr: QWidget_rect(self.ptr)) }
    }

    public var size: QSize {
        get { QSize(ptr: QWidget_size(self.ptr)) }
    }

    public var frameGeometry: QRect {
        get { QRect(ptr: QWidget_frameGeometry(self.ptr)) }
    }

    public var isWindow: Bool {
        get { QWidget_isWindow(self.ptr) }
    }

    public var autoFillBackground: Bool {
        get { QWidget_autoFillBackground(self.ptr) }
        set { QWidget_setAutoFillBackground(self.ptr, newValue) }
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

    public func setWindowState(state: Qt.WindowStates) {
        QWidget_setWindowState(ptr, state.rawValue)
    }

    public func overrideWindowState(state: Qt.WindowStates) {
        QWidget_overrideWindowState(ptr, state.rawValue)
    }

    public var windowState: Qt.WindowStates {
        Qt.WindowStates(rawValue: QWidget_windowState(ptr))
    }

    public init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QWidget_new(parent?.ptr, flags.rawValue), parent: parent)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functorSizeHint: @convention(c) (UnsafeMutableRawPointer?) -> UnsafeMutableRawPointer? = { context in
            let _self = Unmanaged<QWidget>.fromOpaque(context!).takeUnretainedValue()
            return _self.sizeHint.ptr
        }

        QWidget_sizeHint_Override(self.ptr, rawSelf, functorSizeHint)

        let functorMousePressEvent: @convention(c) (UnsafeMutableRawPointer?, UnsafeMutableRawPointer?) -> Void = { context, mouseEvent in
            let _self = Unmanaged<QWidget>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }

        QWidget_mousePressEvent_Override(self.ptr, rawSelf, functorMousePressEvent)
    }

    public init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func add(action: QAction) {
        QWidget_addAction(self.ptr, action.ptr)
    }

    deinit {
        QWidget_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    open func mousePressEvent(event: QMouseEvent) {
        QWidget_mousePressEvent(self.ptr, event.ptr)
    }

    public func move(to: QPoint) {
        QWidget_move(self.ptr, to.ptr)
    }

    public func move(x: Int32, y: Int32) {
        QWidget_movexy(self.ptr, x, y)
    }

    open func close() -> Bool {
        return QWidget_close(self.ptr)
    }

    public func resize(width: Int32, height: Int32) {
        QWidget_resize(self.ptr, width, height)
    }

    public func adjustSize() {
        QWidget_adjustSize(self.ptr)
    }

    public func setFixedSize(_ size: QSize) {
        QWidget_setFixedSize(self.ptr, size.ptr)
    }

    open func show() {
        QWidget_show(self.ptr)
    }

    public func setAttribute(_ attribute: Qt.WidgetAttribute, on: Bool = true) {
        QWidget_setAttribute(ptr, attribute.rawValue, on)
    }

    public func testAttribute(_ attribute: Qt.WidgetAttribute) -> Bool {
        QWidget_testAttribute(ptr, attribute.rawValue)
    }

    public func mapToGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapToGlobal(self.ptr, point.ptr))
    }
    
    public func mapFromGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFromGlobal(self.ptr, point.ptr))
    }
    
    public func mapToParent(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapToParent(self.ptr, point.ptr))
    }
    
    public func mapFromParent(point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFromParent(self.ptr, point.ptr))
    }
    
    public func mapTo(parent: QWidget, point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapTo(self.ptr, parent.ptr, point.ptr))
    }
    
    public func mapFrom(parent: QWidget, point: QPoint) -> QPoint {
        QPoint(ptr: QWidget_mapFrom(self.ptr, parent.ptr, point.ptr))
    }

    public func setGraphicsEffect(effect: QGraphicsEffect) {
        QWidget_setGraphicsEffect(ptr, effect.ptr)
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
        guard
            let p = self.parent,
            let widget = p as? QWidget
        else {
            return nil
        }
        return widget
    }
}
