import CQlift


public class QRect {
    var ptr: UnsafeMutableRawPointer!

    public var x: Int32 {
        get {
            return QRect_x(self.ptr)
        }
        set(newX) {
            QRect_setX(self.ptr, newX)
        }
    }

    public var y: Int32 {
        get {
            return QRect_y(self.ptr)
        }
        set(newY) {
            QRect_setY(self.ptr, newY)
        }
    }

    public var width: Int32 {
        get {
            return QRect_width(self.ptr)
        }
        set(newWidth) {
            QRect_setWidth(self.ptr, newWidth)
        }
    }

    public var height: Int32 {
        get {
            return QRect_height(self.ptr)
        }
        set(newHeight) {
            QRect_setHeight(self.ptr, newHeight)
        }
    }

    public var center: QPoint {
        get {
            return QPoint(ptr: QRect_center(self.ptr))
        }
    }

    public init(x: Int32, y: Int32, width: Int32, height: Int32) {
        self.ptr = QRect_new(x, y, width, height)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            QRect_delete(self.ptr)
            self.ptr = nil
        }
    }
}

