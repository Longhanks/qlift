import CQlift


open class QMenu: QWidget {
    public var title: String = "" {
        didSet {
            QMenu_setTitle(self.ptr, title)
        }
    }

    public init(title: String = "", parent: QWidget? = nil) {
        self.title = title
        super.init(ptr: QMenu_new(title, parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func menuAction() -> QAction {
        return QAction(ptr: QMenu_menuAction(self.ptr))
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QMenu_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

