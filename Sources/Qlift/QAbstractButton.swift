import CQlift


open class QAbstractButton: QWidget {
    var clickedCallback: ((Bool) -> Void)?

    public var text: String = "" {
        didSet {
            QAbstractButton_setText(self.ptr, text)
        }
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func addIcon(icon: QIcon) {
        QAbstractButton_setIcon(ptr, icon.ptr)
    }

    public func setIconSize(size: QSize) {
        QAbstractButton_setIconSize(ptr, size.ptr)
    }

    open func connectClicked(receiver: QObject? = nil, to slot: @escaping ((Bool) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.clickedCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Bool) -> Void = { raw, checked in
            if raw != nil {
                let _self = Unmanaged<QAbstractButton>.fromOpaque(raw!).takeUnretainedValue()
                _self.clickedCallback!(checked)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QAbstractButton_clicked_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

