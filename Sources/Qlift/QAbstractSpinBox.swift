import CQlift


open class QAbstractSpinBox: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QAbstractSpinBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj(QAbstractSpinBox_delete)
    }
}

