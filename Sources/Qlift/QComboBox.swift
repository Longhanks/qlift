import CQlift


open class QComboBox: QWidget {
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
        if self.ptr != nil {
            if QObject_parent(self.ptr) == nil {
                QComboBox_delete(self.ptr)
            }
            self.ptr = nil
        }
    }
}

