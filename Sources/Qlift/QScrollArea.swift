import CQlift


open class QScrollArea: QFrame {
    public enum SizeAdjustPolicy: Int32 {
        case AdjustIgnored = 0
        case AdjustToContentsOnFirstShow
        case AdjustToContents
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QScrollArea_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }

    public func setWidget(_ widget: QWidget) {
        QScrollArea_setWidget(ptr, widget.ptr)
    }

    public func ensureVisible(x: Int32, y: Int32, xmargin: Int32 = 50, ymargin: Int32 = 50) {
        QScrollArea_ensureVisible(ptr, x, y, xmargin, ymargin)
    }

    public func ensureWidgetVisible(child: QWidget, xmargin: Int32 = 50, ymargin: Int32 = 50) {
        QScrollArea_ensureWidgetVisible(ptr, child.ptr, xmargin, ymargin)
    }

    public var horizontalScrollBarPolicy: Qt.ScrollBarPolicy {
        get { Qt.ScrollBarPolicy(rawValue: QScrollArea_horizontalScrollBarPolicy(ptr)) ?? .ScrollBarAsNeeded }
        set { QScrollArea_setHorizontalScrollBarPolicy(ptr, newValue.rawValue) }
    }

    public var verticalScrollBarPolicy: Qt.ScrollBarPolicy {
        get { Qt.ScrollBarPolicy(rawValue: QScrollArea_verticalScrollBarPolicy(ptr)) ?? .ScrollBarAsNeeded }
        set { QScrollArea_setVerticalScrollBarPolicy(ptr, newValue.rawValue) }
    }

    public var alignment: Qt.Alignment {
        get {
            Qt.Alignment(rawValue: QScrollArea_alignment(ptr))
        }
        set {
            QScrollArea_setAlignment(ptr, newValue.rawValue)
        }
    }

    public var widgetResizable: Bool {
        get {
            QScrollArea_widgetResizable(ptr)
        }
        set {
            QScrollArea_setWidgetResizable(ptr, newValue)
        }
    }

    public var sizeAdjustPolicy: SizeAdjustPolicy {
        get {
            SizeAdjustPolicy(rawValue: QScrollArea_sizeAdjustPolicy(ptr)) ?? .AdjustIgnored
        }
        set {
            QScrollArea_setSizeAdjustPolicy(ptr, newValue.rawValue)
        }
    }
}

