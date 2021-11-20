import CQlift


open class QFrame: QWidget {
    public enum Shape: Int32 {
        case NoFrame = 0    // no frame
        case Box            // rectangular box
        case Panel          // rectangular panel
        case WinPanel       // rectangular panel (Windows)
        case HLine          // horizontal line
        case VLine          // vertical line
        case StyledPanel    // rectangular panel depending on the GUI style
    }

    public enum Shadow: Int32 {
        case Plain = 0x0010      // plain line
        case Raised = 0x0020     // raised shadow effect
        case Sunken = 0x0030     // sunken shadow effect
    }

    public enum StyleMask: Int32 {
        case Shadow_Mask = 0x00f0      // mask for the shadow
        case Shape_Mask = 0x000f       // mask for the shape
    }

    public var frameShape: Shape {
        get { Shape(rawValue: QFrame_shape(ptr)) ?? .NoFrame }
        set { QFrame_setShape(ptr, newValue.rawValue) }
    }

    public var frameShadow: Shadow {
        get { Shadow(rawValue: QFrame_shadow(ptr)) ?? .Plain }
        set { QFrame_setShadow(ptr, newValue.rawValue) }
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QFrame_new(parent?.ptr, flags.rawValue))

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QFrame_sizeHint_Override(self.ptr, rawSelf) { context in
            let _self = Unmanaged<QFrame>.fromOpaque(context!).takeUnretainedValue()
            return _self.sizeHint.ptr
        }

        QFrame_mousePressEvent_Override(self.ptr, rawSelf) { context, mouseEvent in
            let _self = Unmanaged<QFrame>.fromOpaque(context!).takeUnretainedValue()
            _self.mousePressEvent(event: QMouseEvent(ptr: mouseEvent!))
        }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        QFrame_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }
}
