import CQlift


open class QHBoxLayout: QBoxLayout {

    public init(parent: QWidget? = nil) {
        super.init(ptr: QHBoxLayout_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

