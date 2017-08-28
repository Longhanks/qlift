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

    public var manhattanLength: Int32 {
        get {
            return QPoint_manhattanLength(self.ptr)
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
}

extension QPoint {
    public static func == (left: QPoint, right: QPoint) -> Bool {
        return QPoint_equal(left.ptr, right.ptr)
    }

    public static func != (left: QPoint, right: QPoint) -> Bool {
        return QPoint_unequal(left.ptr, right.ptr)
    }

    public static func + (left: QPoint, right: QPoint) -> QPoint {
        return QPoint(ptr: QPoint_add(left.ptr, right.ptr))
    }

    public static func - (left: QPoint, right: QPoint) -> QPoint {
        return QPoint(ptr: QPoint_substract(left.ptr, right.ptr))
    }
}

