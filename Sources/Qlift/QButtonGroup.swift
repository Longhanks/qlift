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

    open func connectIdClicked<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Int32>) {
        self.idClickedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idClicked_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idClickedCallback!(id)
        }

    }

    open func connectIdToggled<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotTwin<T, R, Int32, Bool>) {
        self.idToggledCallback = { [weak target] in
            if let target = target { _ = slot(target)($0, $1) }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idToggled_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, id, checked in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idToggledCallback!(id, checked)
        }
    }

    open func connectIdPressed<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Int32>) {
        self.idPressedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idPressed_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idPressedCallback!(id)
        }

    }

    open func connectIdReleased<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Int32>) {
        self.idReleasedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QButtonGroup_idReleased_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, id in
            let _self = Unmanaged<QButtonGroup>.fromOpaque(raw).takeUnretainedValue()
            _self.idReleasedCallback!(id)
        }

    }
}
