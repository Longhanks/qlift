import CQlift


open class QSpacerItem: QLayoutItem {
    public var ptr: UnsafeMutableRawPointer?
    public var needsDelete = true

    public init(width: Int32, height: Int32, hPolicy: QSizePolicy.Policy = .Minimum, vPolicy: QSizePolicy.Policy = .Minimum) {
        self.ptr = QSpacerItem_new(width, height, hPolicy.rawValue, vPolicy.rawValue)
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QSpacerItem_delete(self.ptr)
        }
    }
}


