import CQlift


open class QAbstractButton: QWidget {
    var clickedBoolCallback: ((Bool) -> Void)?
    var clickedCallback: (() -> Void)?
    var toggledCallback: ((Bool) -> Void)?
    var pressedCallback: (() -> Void)?
    var releasedCallback: (() -> Void)?

    public var text: String{
        get {
            let s = QAbstractButton_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QAbstractButton_setText(self.ptr, newValue) }
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public func addIcon(_ icon: QIcon) {
        QAbstractButton_setIcon(ptr, icon.ptr)
    }

    public func setIconSize(_ size: QSize) {
        QAbstractButton_setIconSize(ptr, size.ptr)
    }

    public var checkable: Bool {
        get { QAbstractButton_getCheckable(ptr) }
        set { QAbstractButton_setCheckable(ptr, newValue) }
    }

    public var checked: Bool {
        get { QAbstractButton_getChecked(ptr) }
        set { QAbstractButton_setChecked(ptr, newValue) }
    }

    public var down: Bool {
        get { QAbstractButton_isDown(ptr) }
        set { QAbstractButton_setDown(ptr, newValue) }
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        let object: QObject = receiver ?? self
        self.clickedBoolCallback = slot

        QAbstractButton_clicked_connect(self.ptr, object.ptr) { raw, checked in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
            _self.clickedBoolCallback!(checked)
        }
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.clickedCallback = slot

        QAbstractButton_clicked_connect(self.ptr, object.ptr) { raw, checked in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
            _self.clickedCallback!()
        }
    }

    open func connectToggled(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        let object: QObject = receiver ?? self
        self.toggledCallback = slot

        QAbstractButton_toggled_connect(self.ptr, object.ptr) { raw, checked in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
            _self.toggledCallback!(checked)
        }
    }

    open func connectPressed(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.pressedCallback = slot

        QAbstractButton_pressed_connect(self.ptr, object.ptr) { raw in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
            _self.pressedCallback!()
        }
    }

    open func connectReleased(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self
        self.releasedCallback = slot

        QAbstractButton_released_connect(self.ptr, object.ptr) { raw in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
            _self.releasedCallback!()
        }
    }
}
