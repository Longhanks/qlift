import CQlift


open class QSpinBox: QAbstractSpinBox {
    public var value: Int32 {
        get {
            return QSpinBox_value(self.ptr)
        }
        set(newValue) {
            QSpinBox_setValue(self.ptr, newValue)
        }
    }

    public var minimum: Int32 {
        get {
            return QSpinBox_minimum(self.ptr)
        }
        set(newMinimum) {
            QSpinBox_setMinimum(self.ptr, newMinimum)
        }
    }

    public var maximum: Int32 {
        get {
            return QSpinBox_maximum(self.ptr)
        }
        set(newMaximum) {
            QSpinBox_setValue(self.ptr, newMaximum)
        }
    }

    public override init(parent: QWidget? = nil) {
        super.init(ptr: QSpinBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

