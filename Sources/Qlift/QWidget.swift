import CQlift


open class QWidget: QObject {
    public var windowTitle: String = "" {
        didSet {
            setWindowTitle()
        }
    }

    func setWindowTitle() {
        QWidget_setWindowTitle(self.ptr, windowTitle)
    }

    public var maximumSize: QSize {
        get {
            return QSize(ptr: QWidget_maximumSize(self.ptr))
        }
        set {
            QWidget_setMaximumSize(self.ptr, newValue.ptr)
        }
    }

    open var sizeHint: QSize {
        get {
            return QSize(ptr: QWidget_sizeHint(self.ptr))
        }
    }

    public var sizePolicy: QSizePolicy {
        get {
            return QSizePolicy(ptr: QWidget_sizePolicy(self.ptr))
        }
        set {
            QWidget_setSizePolicy(self.ptr, newValue.ptr)
        }
    }

    public var styleSheet: String {
        get {
            return String(cString: QWidget_styleSheet(self.ptr))
        }
        set {
            QWidget_setStyleSheet(self.ptr, newValue)
        }
    }

    public var geometry: QRect? {
        get {
            return QRect(ptr: QWidget_geometry(self.ptr))
        }
        set(newGeometry) {
            QWidget_setGeometry(self.ptr, newGeometry?.ptr)
        }
    }

    public var enabled: Bool {
        get {
            return QWidget_isEnabled(self.ptr)
        }
        set(newEnabled) {
            QWidget_setEnabled(self.ptr, newEnabled)
        }
    }

    public var height: Int32 {
        get {
            return QWidget_height(self.ptr)
        }
    }

    public var width: Int32 {
        get {
            return QWidget_width(self.ptr)
        }
    }

    public var pos: QPoint {
        get {
            return QPoint(ptr: QWidget_pos(self.ptr))
        }
    }

    public var rect: QRect {
        get {
            return QRect(ptr: QWidget_rect(self.ptr))
        }
    }

    public var frameGeometry: QRect {
        get {
            return QRect(ptr: QWidget_frameGeometry(self.ptr))
        }
    }

    public var isWindow: Bool {
        get {
            return QWidget_isWindow(self.ptr)
        }
    }

    public init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QWidget_new(parent?.ptr, flags.rawValue), parent: parent)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functor: @convention(c) (UnsafeMutableRawPointer?) -> UnsafeMutableRawPointer? = { context in
            let _self = Unmanaged<QWidget>.fromOpaque(context!).takeUnretainedValue()
            return Unmanaged.passUnretained(_self.sizeHint).toOpaque()
        }

        QWidget_sizeHint_Override(self.ptr, rawSelf, functor)
    }

    public init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func add(action: QAction) {
        QWidget_addAction(self.ptr, action.ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QWidget_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public func move(to: QPoint) {
        QWidget_move(self.ptr, to.ptr)
    }

    open func close() -> Bool {
        return QWidget_close(self.ptr)
    }

    public func resize(width: Int32, height: Int32) {
        QWidget_resize(self.ptr, width, height)
    }

    open func show() {
        QWidget_show(self.ptr)
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
        if let p = self.parent {
            if let w = p as? QWidget {
                return w
            }
        }
        return nil;
    }
}
