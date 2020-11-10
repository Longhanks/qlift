import CQlift


open class QDialog: QWidget {
    public override init(parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QDialog_new(parent?.ptr, flags.rawValue), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QDialog_delete(self.ptr)
            }
            self.ptr = nil
        }
    }

    open func exec() -> DialogCode {
        return DialogCode(rawValue: QDialog_exec(self.ptr))
    }

    open func accept() {
        QDialog_accept(self.ptr)
    }

    open func reject() {
        QDialog_reject(self.ptr)
    }
}

extension QDialog {
    public struct DialogCode: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let Accepted = DialogCode(rawValue: 1)
        public static let Rejected: DialogCode = []
    }
}
