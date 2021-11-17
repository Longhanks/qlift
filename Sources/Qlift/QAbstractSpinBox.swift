import CQlift


open class QAbstractSpinBox: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QAbstractSpinBox_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}

