import CQlift


open class QStatusBar: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QStatusBar_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QStatusBar_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public var sizeGripEnabled: Bool {
        get {
            QStatusBar_isSizeGripEnabled(ptr)
        }
        set {
            QStatusBar_setSizeGripEnabled(ptr, newValue)
        }
    }

    public func insertPermanentWidget(index: Int32, widget: QWidget, stretch: Int32 = 0) -> Int32 {
        QStatusBar_insertPermanentWidget(ptr, index, widget.ptr, stretch)
    }

    public func insertWidget(index: Int32, widget: QWidget, stretch: Int32 = 0) -> Int32 {
        QStatusBar_insertWidget(ptr, index, widget.ptr, stretch)
    }

    public func addPermanentWidget(widget: QWidget, stretch: Int32 = 0) {
        QStatusBar_addPermanentWidget(ptr, widget.ptr, stretch)
    }

    public func addWidget(widget: QWidget, stretch: Int32 = 0) {
        QStatusBar_addWidget(ptr, widget.ptr, stretch)
    }

    public func removeWidget(widget: QWidget) {
        QStatusBar_removeWidget(ptr, widget.ptr)
    }

    public func clearMessage() {
        QStatusBar_clearMessage(ptr)
    }

    public func showMessage(message: String, timeout: Int32 = 0) {
        QStatusBar_showMessage(ptr, message, timeout)
    }
}

