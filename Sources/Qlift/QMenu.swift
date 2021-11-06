import CQlift


open class QMenu: QWidget {
    public var title: String {
        get {
            var len: Int32 = 0
            let s = QMenu_title(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
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

