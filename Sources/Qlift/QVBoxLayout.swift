import CQlift


open class QVBoxLayout: QBoxLayout {

    public init(parent: QWidget? = nil) {
        super.init(ptr: QVBoxLayout_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}

