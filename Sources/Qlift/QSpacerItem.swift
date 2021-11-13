import CQlift


open class QSpacerItem: QLayoutItem {
    var ptr: UnsafeMutableRawPointer!

    public var qtPtr: UnsafeMutableRawPointer! {
        ptr
    }

    public var swiftOwership = true

    public init(width: Int32, height: Int32, horizontalPolicy: QSizePolicy.Policy = .Minimum, verticalPolicy: QSizePolicy.Policy = .Minimum) {
        self.ptr = QSpacerItem_new(width, height, horizontalPolicy.rawValue, verticalPolicy.rawValue)
    }

    deinit {
        if self.ptr != nil && self.swiftOwership {
            QSpacerItem_delete(self.ptr)
        }
    }
}


