import CQlift


open class QAbstractButton: QWidget {
    public var text: String {
        get {
            return String(cString: QAbstractButton_text(self.ptr))
        }
        set(newText) {
            QAbstractButton_setText(self.ptr, newText)
        }
    }

    public override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping @convention(c) (Int32) -> Void) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }
        QAbstractButton_clicked_connect(self.ptr, object.ptr, slot)
    }
}

