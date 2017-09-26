import CQlift


open class QMainWindow: QWidget {
    public var centralWidget: QWidget? = nil {
        didSet {
            QMainWindow_setCentralWidget(self.ptr, centralWidget?.ptr)
        }
    }

    private var _menuBar: QMenuBar? = nil

    public var menuBar: QMenuBar! {
        get {
            if self._menuBar == nil {
                self._menuBar = QMenuBar(ptr: QMainWindow_menuBar(self.ptr))
            }
            return self._menuBar!
        }
        set {
            QMainWindow_setMenuBar(self.ptr, newValue?.ptr)
            self._menuBar = newValue
        }
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags.rawValue), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QMainWindow_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

