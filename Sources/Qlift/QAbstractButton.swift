import CQlift


open class QAbstractButton: QWidget {
    var clickedBoolCallback: ((Bool) -> Void)?
    var clickedCallback: (() -> Void)?
    var toggledCallback: ((Bool) -> Void)?
    var pressedCallback: (() -> Void)?

    public var text: String{
        get {
            var len: Int32 = 0
            let s = QAbstractButton_text(ptr, &len)!
            return String(utf16CodeUnits: s, count: Int(len))
        }
        set {
            QAbstractButton_setText(self.ptr, newValue)
        }
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func addIcon(_ icon: QIcon) {
        QAbstractButton_setIcon(ptr, icon.ptr)
    }

    public func setIconSize(_ size: QSize) {
        QAbstractButton_setIconSize(ptr, size.ptr)
    }

    public var checkable: Bool {
        get {
            QAbstractButton_getCheckable(ptr)
        }
        set {
            QAbstractButton_setCheckable(ptr, newValue)
        }
    }

    public var checked: Bool {
        get {
            QAbstractButton_getChecked(ptr)
        }
        set {
            QAbstractButton_setChecked(ptr, newValue)
        }
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.clickedBoolCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Bool) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                _self.clickedBoolCallback!(checked)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_clicked_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.clickedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Bool) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                _self.clickedCallback!()
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_clicked_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectToggled(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.toggledCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Bool) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                _self.toggledCallback!(checked)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_toggled_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectPressed(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.pressedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                _self.pressedCallback!()
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_pressed_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

