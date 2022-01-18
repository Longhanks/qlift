import CQlift

open class QComboBox: QWidget {
    public enum InsertPolicy: Int32 {
        case NoInsert
        case InsertAtTop
        case InsertAtCurrent
        case InsertAtBottom
        case InsertAfterCurrent
        case InsertBeforeCurrent
        case InsertAlphabetically
    }

    public enum SizeAdjustPolicy: Int32 {
        case AdjustToContents
        case AdjustToContentsOnFirstShow
        case AdjustToMinimumContentsLength
        case AdjustToMinimumContentsLengthWithIcon
    }

    var currentIndexChangedIntCallback: ((Int32) -> Void)?

    public init(parent: QWidget? = nil) {
        super.init(ptr: QComboBox_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    override func swiftCleanup() {
        super.swiftCleanup()
        currentIndexChangedIntCallback = nil
    }
    
    public func add(item: String) {
        QComboBox_addItem(self.ptr, item)
    }

    public func add<T: RawRepresentable>(item: T) where T.RawValue == String {
        QComboBox_addItem(self.ptr, item.rawValue)
    }

    public var frame: Bool {
        get { QComboBox_hasFrame(ptr) }
        set { QComboBox_setFrame(ptr, newValue) }
    }

    public var currentText: String {
        get {
            let s = QComboBox_currentText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QComboBox_setCurrentText(ptr, newValue) }
    }

    public var placeholderText: String {
        get {
            let s = QComboBox_placeholderText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QComboBox_setPlaceholderText(ptr, newValue) }
    }

    public var currentIndex: Int32 {
        get { QComboBox_currentIndex(ptr) }
        set { QComboBox_setCurrentIndex(ptr, newValue) }
    }

    public var insertPolicy: InsertPolicy {
        get { InsertPolicy(rawValue: QComboBox_insertPolicy(ptr)) ?? .InsertAtBottom }
        set { QComboBox_setInsertPolicy(ptr, newValue.rawValue) }
    }

    public var sizeAdjustPolicy: SizeAdjustPolicy {
        get { SizeAdjustPolicy(rawValue: QComboBox_sizeAdjustPolicy(ptr)) ?? .AdjustToContents }
        set { QComboBox_setSizeAdjustPolicy(ptr, newValue.rawValue) }
    }

    public var minimumContentsLength: Int32 {
        get { QComboBox_minimumContentsLength(ptr) }
        set { QComboBox_setMinimumContentsLength(ptr, newValue) }
    }

    public var count: Int32 {
        get { QComboBox_count(ptr) }
    }

    public var maxCount: Int32 {
        get { QComboBox_maxCount(ptr) }
        set { QComboBox_setMaxCount(ptr, newValue) }
    }

    public func itemText(index: Int32) -> String {
        let s = QComboBox_itemText(ptr, index)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }

    public func setQStyledItemDelegate() {
        QComboBox_setQStyledItemDelegate(ptr)
    }

    open func connectCurrentIndexChanged(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self
        self.currentIndexChangedIntCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QComboBox_currentIndexChanged_connect(self.ptr, object.ptr, rawSelf) { raw, index in
            let _self = Unmanaged<QComboBox>.fromOpaque(raw!).takeUnretainedValue()
            _self.currentIndexChangedIntCallback!(index)
        }
    }
}
