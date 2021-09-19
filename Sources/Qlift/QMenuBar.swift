import CQlift


open class QMenuBar: QWidget {
    public init(parent: QWidget? = nil) {
        super.init(ptr: QMenuBar_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj(QMenuBar_delete)
    }
}
