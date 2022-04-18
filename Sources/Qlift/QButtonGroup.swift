import CQlift

open class QButtonGroup: QObject {
    var idClickedCallback: ((Int32) -> Void)?
    var idToggledCallback: ((Int32, Bool) -> Void)?
    var idPressedCallback: ((Int32) -> Void)?
    var idReleasedCallback: ((Int32) -> Void)?

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QButtonGroup_new(parent?.ptr))
    }

    deinit {
        checkDeleteQtObj()
    }
    
    override func swiftCleanup() {
        super.swiftCleanup()
        idClickedCallback = nil
        idToggledCallback = nil
        idPressedCallback = nil
        idReleasedCallback = nil
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
        let object: QObject = receiver ?? self

        self.idClickedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idClicked_connect(self.ptr, object.ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idClickedCallback!(id)
        }

    }

    open func connectIdToggled(receiver: QObject? = nil, to slot: @escaping ((Int32, Bool) -> Void)) {
        let object: QObject = receiver ?? self

        self.idToggledCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idToggled_connect(self.ptr, object.ptr, rawSelf) { raw, id, checked in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idToggledCallback!(id, checked)
        }
    }

    open func connectIdPressed(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self

        self.idPressedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idPressed_connect(self.ptr, object.ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idPressedCallback!(id)
        }

    }

    open func connectIdReleased(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self

        self.idReleasedCallback = slot

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idReleased_connect(self.ptr, object.ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idReleasedCallback!(id)
        }

    }
}
