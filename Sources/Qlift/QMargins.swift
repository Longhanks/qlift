import CQlift


public class QMargins {
    var ptr: UnsafeMutableRawPointer!

    public init(left: Int32, top: Int32, right: Int32, bottom: Int32) {
        self.ptr = QMargins_new(left, top, right, bottom)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            QMargins_delete(self.ptr)
        }
    }
}
