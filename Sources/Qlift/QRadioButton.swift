import CQlift


open class QRadioButton: QAbstractButton {
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QRadioButton_new(text, parent?.ptr))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QRadioButton_mousePressEvent_Override(self.ptr, rawSelf) { context, mouseEvent in
            let _self = Unmanaged<QRadioButton>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        QRadioButton_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    open override func mousePressEvent(event: QMouseEvent) {
        QRadioButton_mousePressEvent(self.ptr, event.ptr)
    }
}
