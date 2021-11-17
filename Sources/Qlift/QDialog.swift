import CQlift


open class QDialog: QWidget {
    public enum DialogCode: Int32 {
        case Rejected = 0
        case Accepted
    }

    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QDialog_new(parent?.ptr, flags.rawValue))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var modal: Bool {
        get {
            QDialog_isModal(ptr)
        }
        set {
            QDialog_setModal(ptr, newValue)
        }
    }

    public var sizeGripEnabled: Bool {
        get {
            QDialog_isSizeGripEnabled(ptr)
        }
        set {
            QDialog_setSizeGripEnabled(ptr, newValue)
        }
    }

    open func exec() -> DialogCode {
        return DialogCode(rawValue: QDialog_exec(self.ptr)) ?? .Rejected
    }

    open func accept() {
        QDialog_accept(self.ptr)
    }

    open func reject() {
        QDialog_reject(self.ptr)
    }
}
