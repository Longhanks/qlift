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

