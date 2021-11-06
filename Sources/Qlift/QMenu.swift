import CQlift


open class QMenu: QWidget {
    public var title: String {
        get {
            let s = QMenu_title(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QMenu_setTitle(self.ptr, newValue)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        super.init(ptr: QMenu_new(title, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func menuAction() -> QAction {
        return QAction(ptr: QMenu_menuAction(self.ptr))
    }

    deinit {
        checkDeleteQtObj()
    }
}

