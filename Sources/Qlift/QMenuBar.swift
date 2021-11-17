import CQlift


open class QMenuBar: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QMenuBar_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}
