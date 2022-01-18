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

    open func connectActionTriggered(receiver: QObject? = nil, to slot: @escaping ((SliderAction) -> Void)) {
        let object: QObject = receiver ?? self

        self.actionTriggeredCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_actionTriggered_connect(ptr, object.ptr, rawSelf) { raw, action in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
            _self.actionTriggeredCallback!(SliderAction(rawValue: action)!)
        }
    }

    open func connectRangeChanged(receiver: QObject? = nil, to slot: @escaping ((Int32, Int32) -> Void)) {
        let object: QObject = receiver ?? self

        self.rangeChangedCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_rangeChanged_connect(ptr, object.ptr, rawSelf) { raw, min, max in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
            _self.rangeChangedCallback!(min, max)
        }

    }

    open func connectSliderMoved(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self

        self.sliderMovedCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderMoved_connect(ptr, object.ptr, rawSelf) { raw, position in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
            _self.sliderMovedCallback!(position)
        }
    }

    open func connectSliderPressed(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self

        self.sliderPressedCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderPressed_connect(self.ptr, object.ptr, rawSelf) { raw in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
            _self.sliderPressedCallback!()
        }

    }

    open func connectSliderReleased(receiver: QObject? = nil, to slot: @escaping (() -> Void)) {
        let object: QObject = receiver ?? self

        self.sliderReleasedCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_sliderReleased_connect(self.ptr, object.ptr, rawSelf) { raw in
            if raw != nil {
                let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
                _self.sliderReleasedCallback!()
            }
        }
    }

    open func connectValueChanged(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self

        self.valueChangedCallback = slot
        let rawSelf = Unmanaged.passUnretained(self).toOpaque()
        QAbstractSlider_valueChanged_connect(ptr, object.ptr, rawSelf) { raw, value in
            let _self = Unmanaged<QAbstractSlider>.fromOpaque(raw!).takeUnretainedValue()
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
