import CQlift


open class QAbstractSlider: QWidget {
    public enum SliderAction: Int32 {
        case SliderNoAction
        case SliderSingleStepAdd
        case SliderSingleStepSub
        case SliderPageStepAdd
        case SliderPageStepSub
        case SliderToMinimum
        case SliderToMaximum
        case SliderMove
    }

    var actionTriggeredCallback: ((SliderAction) ->Void)?
    var rangeChangedCallback: ((Int32, Int32) ->Void)?
    var sliderMovedCallback: ((Int32) ->Void)?
    var sliderPressedCallback: (() ->Void)?
    var sliderReleasedCallback: (() ->Void)?
    var valueChangedCallback: ((Int32) ->Void)?

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
    
    override func swiftCleanup() {
        super.swiftCleanup()
        actionTriggeredCallback = nil
        rangeChangedCallback = nil
        sliderMovedCallback = nil
        sliderPressedCallback = nil
        sliderReleasedCallback = nil
        valueChangedCallback = nil
    }

    open func connectActionTriggered<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, SliderAction>) {
        self.actionTriggeredCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_actionTriggered_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, action in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.actionTriggeredCallback!(SliderAction(rawValue: action)!)
        }
    }

    open func connectRangeChanged<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotTwin<T, R, Int32, Int32>) {
        self.rangeChangedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0, $1) }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_rangeChanged_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, min, max in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.rangeChangedCallback!(min, max)
        }

    }

    open func connectSliderMoved<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Int32>) {
        self.sliderMovedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderMoved_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, position in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.sliderMovedCallback!(position)
        }
    }

    open func connectSliderPressed<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.sliderPressedCallback = { [weak target] in
            if let target = target { _ = slot(target)() }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderPressed_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.sliderPressedCallback!()
        }

    }

    open func connectSliderReleased<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping SlotVoid<T, R>) {
        self.sliderReleasedCallback = { [weak target] in
            if let target = target { _ = slot(target)() }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderReleased_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.sliderReleasedCallback!()
        }
    }

    open func connectValueChanged<T: QObject, R: Any>(receiver: QObject? = nil, target: T, to slot: @escaping Slot<T, R, Int32>) {
        self.valueChangedCallback = { [weak target] in
            if let target = target { _ = slot(target)($0) }
        }
        
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_valueChanged_connect(self.ptr, (receiver ?? self).ptr, rawSelf) { raw, value in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw).takeUnretainedValue()
            _self.valueChangedCallback!(value)
        }

    }

    public func triggerAction(_ action: SliderAction) {
        QAbstractSlider_triggerAction(ptr, action.rawValue)
    }

    public var invertedAppearance : Bool {
        get { QAbstractSlider_invertedAppearance(ptr) }
        set { QAbstractSlider_setInvertedAppearance(ptr, newValue) }
    }
    public var invertedControls : Bool {
        get { QAbstractSlider_invertedControls(ptr) }
        set { QAbstractSlider_setInvertedControls(ptr, newValue) }
    }
    public var maximum : Int32 {
        get { QAbstractSlider_maximum(ptr) }
        set { QAbstractSlider_setMaximum(ptr, newValue) }
    }
    public var minimum : Int32 {
        get { QAbstractSlider_minimum(ptr) }
        set { QAbstractSlider_setMinimum(ptr, newValue) }
    }
    public var orientation : Qt.Orientation {
        get { Qt.Orientation(rawValue: QAbstractSlider_orientation(ptr))! }
        set { QAbstractSlider_setOrientation(ptr, newValue.rawValue) }
    }
    public var pageStep : Int32 {
        get { QAbstractSlider_pageStep(ptr) }
        set { QAbstractSlider_setPageStep(ptr, newValue) }
    }
    public var singleStep : Int32 {
        get { QAbstractSlider_singleStep(ptr) }
        set { QAbstractSlider_setSingleStep(ptr, newValue) }
    }
    public var sliderDown : Bool {
        get { QAbstractSlider_isSliderDown(ptr) }
        set { QAbstractSlider_setSliderDown(ptr, newValue) }
    }
    public var sliderPosition : Int32 {
        get { QAbstractSlider_sliderPosition(ptr) }
        set { QAbstractSlider_setSliderPosition(ptr, newValue) }
    }
    public var tracking : Bool {
        get { QAbstractSlider_hasTracking(ptr) }
        set { QAbstractSlider_setTracking(ptr, newValue) }
    }
    public var value : Int32 {
        get { QAbstractSlider_value(ptr) }
        set { QAbstractSlider_setValue(ptr, newValue) }
    }

}
