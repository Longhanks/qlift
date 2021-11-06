import CQlift


open class QComboBox: QWidget {
    var currentIndexChangedIntCallback: ((Int32) -> Void)?
    var currentIndexChangedStringCallback: ((String) -> Void)?

    public init(parent: QWidget? = nil) {
        super.init(ptr: QComboBox_new(parent?.ptr), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public func add(item: String) {
        // TODO: Support userData QVariant
        QComboBox_addItem(self.ptr, item, nil)
    }

    deinit {
        checkDeleteQtObj()
    }

    open func connectCurrentIndexChanged(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.currentIndexChangedIntCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, Int32) -> Void = { raw, index in
            if raw != nil {
                let _self = Unmanaged<QComboBox>.fromOpaque(raw!).takeUnretainedValue()
                _self.currentIndexChangedIntCallback!(index)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QComboBox_currentIndexChanged_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

