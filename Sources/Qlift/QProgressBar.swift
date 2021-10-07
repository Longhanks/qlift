import CQlift


open class QProgressBar: QWidget {
    public enum Direction: Int32 {
        case TopToBottom = 0
        case BottomToTop = 1
    }

    public var value: Int32 {
        get {
            return QProgressBar_value(self.ptr)
        }
        set(newValue) {
            QProgressBar_setValue(self.ptr, newValue)
        }
    }

    public var minimum: Int32 {
        get {
            return QProgressBar_minimum(self.ptr)
        }
        set(newMinimum) {
            QProgressBar_setMinimum(self.ptr, newMinimum)
        }
    }

    public var maximum: Int32 {
        get {
            return QProgressBar_maximum(self.ptr)
        }
        set(newMaximum) {
            QProgressBar_setValue(self.ptr, newMaximum)
        }
    }

    public var format: String = "%p" {
        didSet {
            QProgressBar_setFormat(self.ptr, format)
        }
    }

    public var textVisible: Bool {
        get {
            QProgressBar_isTextVisible(ptr)
        }
        set {
            QProgressBar_setTextVisible(ptr, newValue)
        }
    }

    public var orientation: Qt.Orientation {
        get {
            Qt.Orientation(rawValue: QProgressBar_orientation(ptr)) ?? .Horizontal
        }
        set {
            QProgressBar_setOrientation(ptr, newValue.rawValue)
        }
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

