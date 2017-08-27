import CQlift


public class QPoint {
    var ptr: UnsafeMutableRawPointer!

    public var x: Int32 {
        get {
            return QPoint_x(self.ptr)
        }
        set(newX) {
            QPoint_setX(self.ptr, newX)
        }
    }

    public var y: Int32 {
        get {
            return QPoint_y(self.ptr)
        }
        set(newY) {
            QPoint_setY(self.ptr, newY)
        }
    }

    public init(x: Int32, y: Int32) {
        self.ptr = QPoint_new(x, y)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            QPoint_delete(self.ptr)
            self.ptr = nil
        }
    }

    public func isNull() -> Bool {
        return QPoint_isNull(self.ptr)
    }

    public func manhattanLength() -> Int32 {
        return QPoint_manhattanLength(self.ptr)
    }
}

