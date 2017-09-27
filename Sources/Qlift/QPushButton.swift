import CQlift


open class QPushButton: QAbstractButton {
    // Icon not supported at the moment
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QPushButton_new(nil, text, parent?.ptr), parent: parent)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functor: @convention(c) (UnsafeMutableRawPointer?, UnsafeMutableRawPointer?) -> Void = { context, mouseEvent in
            if context != nil {
                let _self = Unmanaged<QPushButton>.fromOpaque(context!).takeUnretainedValue()
                _self.mousePressEvent(event: mouseEvent)
            }
        }

        QPushButton_mousePressEvent_Override(self.ptr, rawSelf, functor)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QPushButton_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    open func mousePressEvent(event: UnsafeMutableRawPointer?) {
        QPushButton_mousePressEvent(self.ptr, event)
    }
}

