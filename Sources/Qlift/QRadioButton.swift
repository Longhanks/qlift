import CQlift


open class QRadioButton: QAbstractButton {
    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QRadioButton_new(text, parent?.ptr), parent: parent)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functor: @convention(c) (UnsafeMutableRawPointer?, UnsafeMutableRawPointer?) -> Void = { context, mouseEvent in
            let _self = Unmanaged<QRadioButton>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }
        QRadioButton_mousePressEvent_Override(self.ptr, rawSelf, functor)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj(QRadioButton_delete)
    }

    open override func mousePressEvent(event: QMouseEvent) {
        QRadioButton_mousePressEvent(self.ptr, event.ptr)
    }
}
