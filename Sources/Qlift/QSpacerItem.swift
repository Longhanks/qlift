import CQlift


open class QSpacerItem: QLayoutItem {
    public var ptr: UnsafeMutableRawPointer!
    public var needsDelete = true

    public init(width: Int32, height: Int32, horizontalPolicy: QSizePolicy.Policy = .Minimum, verticalPolicy: QSizePolicy.Policy = .Minimum) {
        self.ptr = QSpacerItem_new(width, height, horizontalPolicy.rawValue, verticalPolicy.rawValue)
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QSpacerItem_delete(self.ptr)
        }
    }
}


