import CQlift


open class QToolButton: QAbstractButton {

    public enum ToolButtonStyle: Int32 {
        case toolButtonIconOnly = 0
        case toolButtonTextOnly
        case toolButtonTextBesideIcon
        case toolButtonTextUnderIcon
        case toolButtonFollowStyle
    }

    public var style: ToolButtonStyle = .toolButtonIconOnly {
        didSet {
            QToolButton_setStyle(ptr, style.rawValue)
        }
    }
    
    // Icon not supported at the moment
    public init(parent: QWidget? = nil) {
        super.init(ptr: QToolButton_new(parent?.ptr), parent: parent)

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        let functor: @convention(c) (UnsafeMutableRawPointer?, UnsafeMutableRawPointer?) -> Void = { context, mouseEvent in
            let _self = Unmanaged<QToolButton>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }

        QToolButton_mousePressEvent_Override(self.ptr, rawSelf, functor)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QToolButton_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    open override func mousePressEvent(event: QMouseEvent) {
        QToolButton_mousePressEvent(self.ptr, event.ptr)
    }

}
