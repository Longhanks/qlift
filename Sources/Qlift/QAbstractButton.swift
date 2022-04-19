import CQlift

open class QAbstractButton: QWidget {
    var clickedCallback: ((Bool) -> Void)?
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

    override func swiftCleanup() {
        super.swiftCleanup()
        clickedCallback = nil
        toggledCallback = nil
        pressedCallback = nil
        releasedCallback = nil
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

    open func connectClicked<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Bool>) {
        self.clickedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        connectClickedHook(receiver: receiver)
    }

    open func connectClicked<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.clickedCallback = { [weak target] _ in
            if let target = target { _ = slot(target)() }
        }
        connectClickedHook(receiver: receiver)
    }

    private func connectClickedHook(receiver: QObject?) {
        QAbstractButton_clicked_connect(self.ptr, (receiver ?? self).ptr) { raw, checked in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw).takeUnretainedValue()
            _self.clickedCallback?(checked)
        }
    }


    open func connectToggled<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Bool>) {
        self.toggledCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        
        QAbstractButton_toggled_connect(self.ptr, (receiver ?? self).ptr) { raw, checked in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw).takeUnretainedValue()
            _self.toggledCallback?(checked)
        }
    }

    open func connectPressed<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.pressedCallback = { [weak target] in
            if let target = target { _ = slot(target)() }
        }

        QAbstractButton_pressed_connect(self.ptr, (receiver ?? self).ptr) { raw in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw).takeUnretainedValue()
            _self.pressedCallback!()
        }
    }

    open func connectReleased<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.releasedCallback = { [weak target] in
            if let target = target { _ = slot(target)() }
        }

        QAbstractButton_released_connect(self.ptr, (receiver ?? self).ptr) { raw in
            let _self = Unmanaged<QAbstractButton>.fromOpaque(raw).takeUnretainedValue()
            _self.releasedCallback!()
        }
    }
}
