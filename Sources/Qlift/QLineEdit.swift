import CQlift


open class QLineEdit: QWidget {
    public enum EchoMode: Int32 {
        case Normal
        case NoEcho
        case Password
        case PasswordEchoOnEdit
    }

    public enum ActionPosition: Int32 {
        case LeadingPosition
        case TrailingPosition
    }

    var textChangedCallback: ((String) -> Void)?
    var textEditedCallback: ((String) -> Void)?
    var returnPressedCallback: (() -> Void)?
    var editingFinishedCallback: (() -> Void)?
    var inputRejectedCallback: (() -> Void)?

    public init(text: String = "", parent: QWidget? = nil) {
        super.init(ptr: QLineEdit_new(text, parent?.ptr), parent: parent)
    }

    deinit {
        QLiftLineEdit_swiftHookCleanup(ptr)
        checkDeleteQtObj()
    }

    public var text: String {
        get {
            let s = QLineEdit_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QLineEdit_setText(ptr, newValue)
        }
    }

    public var placeholderText: String {
        get {
            let s = QLineEdit_placeholderText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QLineEdit_setPlaceholderText(ptr, newValue)
        }
    }

    public var selectedText: String {
        get {
            let s = QLineEdit_selectedText(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
    }

    public var alignment: Qt.Alignment {
        get { Qt.Alignment(rawValue: QLineEdit_alignment(ptr)) }
        set { QLineEdit_setAlignment(ptr, newValue.rawValue) }
    }

    public var echoMode: EchoMode {
        get { EchoMode(rawValue: QLineEdit_echoMode(ptr)) ?? .Normal }
        set { QLineEdit_setEchoMode(ptr, newValue.rawValue) }
    }

    public var frame: Bool {
        get { QLineEdit_hasFrame(ptr) }
        set { QLineEdit_setFrame(ptr, newValue) }
    }

    public var inputMask: String {
        get {
            let s = QLineEdit_inputMask(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QLineEdit_setInputMask(ptr, newValue) }
    }

    public var maxLength: Int32 {
        get { QLineEdit_maxLength(ptr) }
        set { QLineEdit_setMaxLength(ptr, newValue) }
    }

    public var clearButtonEnabled: Bool {
        get { QLineEdit_isClearButtonEnabled(ptr) }
        set { QLineEdit_setClearButtonEnabled(ptr, newValue) }
    }


    public func clear() {
        QLineEdit_clear(ptr)
    }

    public func selectAll() {
        QLineEdit_selectAll(ptr)
    }

    public func displayText() -> String {
        let s = QLineEdit_displayText(ptr)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }

    public func addAction(icon: QIcon, position: ActionPosition) -> QAction {
        let actionPtr = QLineEdit_addAction(ptr, icon.ptr, position.rawValue)
        return QAction(ptr: actionPtr)
    }

    open func connectTextEdited(receiver: QObject? = nil, to slot: @escaping ((String) -> Void)) {
        let object: QObject = receiver ?? self
        self.textEditedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QLineEdit_textEdited_connect(self.ptr, object.ptr, rawSelf) { raw, s in
            let _self = Unmanaged<QLineEdit>.fromOpaque(raw).takeUnretainedValue()
            _self.textEditedCallback?(String(utf16CodeUnits: s.utf16, count: Int(s.size)))
        }

    }

    open func connectTextChanged(receiver: QObject? = nil, to slot: @escaping ((String) -> Void)) {
        let object: QObject = receiver ?? self
        self.textChangedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QLineEdit_textChanged_connect(self.ptr, object.ptr, rawSelf) { raw, s in
            let _self = Unmanaged<QLineEdit>.fromOpaque(raw).takeUnretainedValue()
            _self.textChangedCallback?(String(utf16CodeUnits: s.utf16, count: Int(s.size)))
        }
    }

    open func connectReturnPressed(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.returnPressedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QLineEdit_returnPressed_connect(self.ptr, object.ptr, rawSelf) { raw in
            let _self = Unmanaged<QLineEdit>.fromOpaque(raw).takeUnretainedValue()
            _self.returnPressedCallback?()
        }
    }

    open func connectEditingFinished(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.editingFinishedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QLineEdit_editingFinished_connect(self.ptr, object.ptr, rawSelf) { raw in
            let _self = Unmanaged<QLineEdit>.fromOpaque(raw).takeUnretainedValue()
            _self.editingFinishedCallback?()
        }
    }

    open func connectInputRejected(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.inputRejectedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QLineEdit_inputRejected_connect(self.ptr, object.ptr, rawSelf) { raw in
            let _self = Unmanaged<QLineEdit>.fromOpaque(raw).takeUnretainedValue()
            _self.inputRejectedCallback?()
        }
    }
}
