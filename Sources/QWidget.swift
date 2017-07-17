import CQlift


open class QWidget: QObject {
    public var windowTitle: String {
        get {
            return String(cString: QWidget_windowTitle(self.ptr))
        }
        set(newWindowTitle) {
            QWidget_setWindowTitle(self.ptr, newWindowTitle)
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

    public init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QWidget_new(parent?.ptr, flags))
        self.windowTitle = ""
        self.geometry = nil
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
        self.windowTitle = ""
        self.geometry = nil
    }

    public func add(action: QAction) {
        QWidget_addAction(self.ptr, action.ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QWidget_delete(self.ptr)
                self.ptr = nil
            }
        }
    }

    open func show() {
        QWidget_show(self.ptr)
    }
}

