import CQlift


open class QSpinBox: QAbstractSpinBox {
    public var value: Int32 = 0 {
        didSet {
            QSpinBox_setValue(self.ptr, value)
        }
    }

    public var minimum: Int32 = 0 {
        didSet {
            QSpinBox_setMinimum(self.ptr, minimum)
        }
    }

    public var maximum: Int32 = 99 {
        didSet {
            QSpinBox_setValue(self.ptr, maximum)
        }
    }

    public override init(parent: QWidget? = nil) {
        super.init(ptr: QSpinBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QSpinBox_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

