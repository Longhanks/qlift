import CQlift


open class QSpinBox: QAbstractSpinBox {
    public override init(parent: QWidget? = nil) {
        super.init(ptr: QSpinBox_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var value: Int32 {
        get { QSpinBox_value(self.ptr) }
        set { QSpinBox_setValue(self.ptr, newValue) }
    }

    public var minimum: Int32 {
        get { QSpinBox_minimum(self.ptr) }
        set { QSpinBox_setMinimum(self.ptr, newValue) }
    }

    public var maximum: Int32 {
        get { QSpinBox_maximum(self.ptr) }
        set { QSpinBox_setValue(self.ptr, newValue) }
    }
}

