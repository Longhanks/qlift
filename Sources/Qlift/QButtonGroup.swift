import CQlift

open class QButtonGroup: QObject {
    var idClickedCallback: ((Int32) -> Void)?
    var idToggledCallback: ((Int32, Bool) -> Void)?
    var idPressedCallback: ((Int32) -> Void)?
    var idReleasedCallback: ((Int32) -> Void)?

    override init(ptr: UnsafeMutableRawPointer, parent: QObject? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QButtonGroup_new(parent?.ptr), parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }

    public func addButton(_ button: QAbstractButton, id: Int32 = -1) {
        QButtonGroup_addButton(ptr, button.ptr, id)
    }

    public var exclusive: Bool {
        get {
            QButtonGroup_exclusive(ptr)
        }
        set {
            QButtonGroup_setExclusive(ptr, newValue)
        }
    }

    public func id(_ button: QAbstractButton) -> Int32 {
        QButtonGroup_id(ptr, button.ptr)
    }

    public func setId(_ button: QAbstractButton, id: Int32) {
        QButtonGroup_setId(ptr, button.ptr, id)
    }

    public var checkedId: Int32 {
        QButtonGroup_checkedId(ptr)
    }

    open func connectIdClicked(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.idClickedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32) -> Void = { raw, id in
            if raw != nil {
                let _self = Unmanaged<QButtonGroup>.fromOpaque(raw!).takeUnretainedValue()
                _self.idClickedCallback!(id)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QButtonGroup_idClicked_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectIdToggled(receiver: QObject? = nil, to slot: @escaping ((Int32, Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.idToggledCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32, Bool) -> Void = { raw, id, checked in
            if raw != nil {
                let _self = Unmanaged<QButtonGroup>.fromOpaque(raw!).takeUnretainedValue()
                _self.idToggledCallback!(id, checked)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QButtonGroup_idToggled_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectIdPressed(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.idPressedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32) -> Void = { raw, id in
            if raw != nil {
                let _self = Unmanaged<QButtonGroup>.fromOpaque(raw!).takeUnretainedValue()
                _self.idPressedCallback!(id)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QButtonGroup_idPressed_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectIdReleased(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.idReleasedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32) -> Void = { raw, id in
            if raw != nil {
                let _self = Unmanaged<QButtonGroup>.fromOpaque(raw!).takeUnretainedValue()
                _self.idReleasedCallback!(id)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QButtonGroup_idReleased_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}
