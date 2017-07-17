import CQlift


open class QRect {
    public var ptr: UnsafeMutableRawPointer?
    
    public init(x: Int32, y: Int32, width: Int32, height: Int32) {
        self.ptr = QRect_new(x, y, width, height)
    }

    deinit {
        if self.ptr != nil {
            QRect_delete(self.ptr)
            self.ptr = nil
        }
    }
}

