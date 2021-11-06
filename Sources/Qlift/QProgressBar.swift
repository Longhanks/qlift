import CQlift


open class QProgressBar: QWidget {
    public enum Direction: Int32 {
        case TopToBottom = 0
        case BottomToTop = 1
    }

    public var alignment: Qt.Alignment {
        get { Qt.Alignment(rawValue: QProgressBar_alignment(ptr)) }
        set { QProgressBar_setAlignment(self.ptr, newValue.rawValue) }
    }

    public var value: Int32 {
        get { QProgressBar_value(self.ptr) }
        set { QProgressBar_setValue(self.ptr, newValue) }
    }

    public var minimum: Int32 {
        get { QProgressBar_minimum(self.ptr) }
        set { QProgressBar_setMinimum(self.ptr, newValue) }
    }

    public var maximum: Int32 {
        get { QProgressBar_maximum(self.ptr) }
        set { QProgressBar_setValue(self.ptr, newValue) }
    }

    public var format: String {
        get {
            let s = QProgressBar_format(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QProgressBar_setFormat(self.ptr, newValue) }
    }

    public var textVisible: Bool {
        get { QProgressBar_isTextVisible(ptr) }
        set { QProgressBar_setTextVisible(ptr, newValue) }
    }

    public var orientation: Qt.Orientation {
        get { Qt.Orientation(rawValue: QProgressBar_orientation(ptr)) ?? .Horizontal }
        set { QProgressBar_setOrientation(ptr, newValue.rawValue) }
    }


    public var invertedAppearance: Bool {
        get { QProgressBar_invertedAppearance(ptr) }
        set { QProgressBar_setInvertedAppearance(ptr, newValue) }
    }

    public var textDirection: Direction {
        get { Direction(rawValue: QProgressBar_textDirection(ptr)) ?? .TopToBottom }
        set { QProgressBar_setTextDirection(ptr, newValue.rawValue) }
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QProgressBar_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

