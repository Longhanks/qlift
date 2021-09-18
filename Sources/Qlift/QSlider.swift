import CQlift


open class QSlider: QAbstractSlider {
    public enum TickPosition: Int32 {
        case NoTicks = 0
        case TicksAbove = 1
        case TicksBelow = 2
        case TicksBothSides = 3
        public static var TicksLeft: TickPosition { TicksAbove }
        public static var TicksRight: TickPosition { TicksBelow }
    }

    public init(orientation: Qt.Orientation, parent: QWidget? = nil) {
        super.init(ptr: QSlider_new_orientation(orientation.rawValue, parent?.ptr), parent: parent)
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QSlider_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QSlider_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    public var tickInterval: Int32 {
        get { QSlider_tickInterval(ptr) }
        set { QSlider_setTickInterval(ptr, newValue)}
    }
    public var tickPosition: TickPosition {
        get { TickPosition(rawValue: QSlider_tickPosition(ptr))! }
        set { QSlider_setTickPosition(ptr, newValue.rawValue) }
    }
}
