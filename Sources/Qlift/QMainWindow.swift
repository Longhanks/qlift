import CQlift


open class QMainWindow: QWidget {
    public var centralWidget: QWidget? {
        get {
            guard let widgetPtr = QMainWindow_centralWidget(self.ptr) else {
                return nil
            }
            return QWidget(ptr: widgetPtr)
        }
        set(newCentralWidget) {
            QMainWindow_setCentralWidget(self.ptr, newCentralWidget?.ptr)
        }
    }

    public var menuBar: QMenuBar? {
        get {
            return QMenuBar(ptr: QMainWindow_menuBar(self.ptr))
        }
        set(newMenuBar) {
            QMainWindow_setMenuBar(self.ptr, newMenuBar?.ptr)
        }
    }

    public override init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QMainWindow_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}

