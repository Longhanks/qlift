import CQlift


open class QDialogButtonBox: QWidget {
    var acceptedCallback: (() -> Void)?
    var rejectedCallback: (() -> Void)?

    public var standardButtons: StandardButton {
        get {
            StandardButton(rawValue: QDialogButtonBox_standardButtons(ptr))
        }
        set {
            QDialogButtonBox_setStandardButtons(self.ptr, newValue.rawValue)
        }
    }

    public var orientation: Qt.Orientation {
        get {
            Qt.Orientation(rawValue: QDialogButtonBox_orientation(ptr)) ?? .Horizontal
        }
        set {
            QDialogButtonBox_setOrientation(self.ptr, newValue.rawValue)
        }
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QDialogButtonBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

extension QDialogButtonBox {
    open func connectAccepted(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.acceptedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let _self = Unmanaged<QDialogButtonBox>.fromOpaque(raw!).takeUnretainedValue()
                _self.acceptedCallback!()
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QDialogButtonBox_accepted_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectRejected(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.rejectedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let _self = Unmanaged<QDialogButtonBox>.fromOpaque(raw!).takeUnretainedValue()
                _self.rejectedCallback!()
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QDialogButtonBox_rejected_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

extension QDialogButtonBox {
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
