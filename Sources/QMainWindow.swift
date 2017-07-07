import CQlift


class QMainWindow: QWidget {
    var centralWidget: QWidget? {
        didSet {
            QMainWindow_setCentralWidget(self.ptr, centralWidget?.ptr)
        }
    }

    override init(parent: QWidget? = nil, flags: Int32 = 0) {
        super.init(ptr: QMainWindow_new(parent?.ptr, flags))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        if self.ptr != nil {
            QMainWindow_delete(self.ptr)
            self.ptr = nil
        }
    }
}

