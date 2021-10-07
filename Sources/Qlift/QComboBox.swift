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

        QComboBox_currentIndexChangedInt_connect(self.ptr, object.ptr, rawSelf, functor)
    }

    open func connectCurrentIndexChanged(receiver: QObject? = nil, to slot: @escaping ((String) -> Void)) {
        var object: QObject = self
        if receiver != nil {
            object = receiver!
        }

        self.currentIndexChangedStringCallback = slot

        let functor: @convention(c) (UnsafeMutableRawPointer?, UnsafePointer<Int8>?) -> Void = { raw, text in
            if raw != nil {
                var str = ""
                if let cStr = text {
                    str = String(cString: cStr)
                }
                let _self = Unmanaged<QComboBox>.fromOpaque(raw!).takeUnretainedValue()
                _self.currentIndexChangedStringCallback!(str)
            }
        }

        let rawSelf = Unmanaged.passUnretained(self).toOpaque()

        QComboBox_currentIndexChangedString_connect(self.ptr, object.ptr, rawSelf, functor)
    }
}

