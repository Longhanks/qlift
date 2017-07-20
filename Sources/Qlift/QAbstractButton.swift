import CQlift


open class QAbstractButton: QWidget {
    var clickedCallback: ((Bool) -> Void)?

    public var text: String {
        get {
            return String(cString: QAbstractButton_text(self.ptr))
        }
        set(newText) {
            QAbstractButton_setText(self.ptr, newText)
        }
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.clickedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                if checked == 0 {
                    _self.clickedCallback!(false)
                } else {
                    _self.clickedCallback!(true)
                }
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_clicked_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

