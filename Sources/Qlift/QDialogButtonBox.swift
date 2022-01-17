import CQlift


open class QDialogButtonBox: QWidget {
    var acceptedCallback: (() -> Void)?
    var rejectedCallback: (() -> Void)?

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }
    
    deinit {
        checkDeleteQtObj()
    }
    
    public var standardButtons: StandardButton {
        get { StandardButton(rawValue: QDialogButtonBox_standardButtons(ptr)) }
        set { QDialogButtonBox_setStandardButtons(self.ptr, newValue.rawValue) }
    }

    public var orientation: Qt.Orientation {
        get { Qt.Orientation(rawValue: QDialogButtonBox_orientation(ptr)) ?? .Horizontal }
        set { QDialogButtonBox_setOrientation(self.ptr, newValue.rawValue) }
    }
    
    public var centerButtons: Bool {
        get { QDialogButtonBox_centerButtons(ptr) }
        set { QDialogButtonBox_setCenterButtons(ptr, newValue) }
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QDialogButtonBox_new(parent?.ptr))
    }

    open func connectAccepted(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.acceptedCallback = slot

        QDialogButtonBox_accepted_connect(self.ptr, object.ptr) { raw in
            let _self = Unmanaged<QDialogButtonBox>.fromOpaque(raw).takeUnretainedValue()
            _self.acceptedCallback?()
        }
    }

    open func connectRejected(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.rejectedCallback = slot

        QDialogButtonBox_rejected_connect(self.ptr, object.ptr) { raw in
            let _self = Unmanaged<QDialogButtonBox>.fromOpaque(raw).takeUnretainedValue()
            _self.rejectedCallback?()
        }
    }

    public struct StandardButton: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let NoButton: StandardButton = []
        public static let Ok = StandardButton(rawValue: 1024)
        public static let Save = StandardButton(rawValue: 2048)
        public static let SaveAll = StandardButton(rawValue: 4096)
        public static let Open = StandardButton(rawValue: 8192)
        public static let Yes = StandardButton(rawValue: 16384)
        public static let YesToAll = StandardButton(rawValue: 32768)
        public static let No = StandardButton(rawValue: 65536)
        public static let NoToAll = StandardButton(rawValue: 131072)
        public static let Abort = StandardButton(rawValue: 262144)
        public static let Retry = StandardButton(rawValue: 524288)
        public static let Ignore = StandardButton(rawValue: 1048576)
        public static let Close = StandardButton(rawValue: 2097152)
        public static let Cancel = StandardButton(rawValue: 4194304)
        public static let Discard = StandardButton(rawValue: 8388608)
        public static let Help = StandardButton(rawValue: 16777216)
        public static let Apply = StandardButton(rawValue: 33554432)
        public static let Reset = StandardButton(rawValue: 67108864)
        public static let RestoreDefaults = StandardButton(rawValue: 134217728)
    }
}
