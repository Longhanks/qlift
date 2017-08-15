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

    public var enabled: Bool {
        get {
            let _enabled = QWidget_isEnabled(self.ptr)
            if _enabled == 0 {
                return false
            } else {
                return true
            }
        }
        set(newEnabled) {
            if newEnabled {
                QWidget_setEnabled(self.ptr, 1)
            } else {
                QWidget_setEnabled(self.ptr, 0)
            }
        }
    }

    public init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QWidget_new(parent?.ptr, flags.rawValue), parent: parent)
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

    open func close() -> Bool {
        let i = QWidget_close(self.ptr)
        if i == 0 {
            return false
        } else {
            return true
        }
    }

    open func show() {
        QWidget_show(self.ptr)
    }
}

