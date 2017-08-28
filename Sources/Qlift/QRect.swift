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

    public func moveCenter(to: QPoint) {
        QRect_moveCenter(self.ptr, to.ptr)
    }

    public var bottom: Int32 {
        get {
            return QRect_bottom(self.ptr)
        }
        set(newBottom) {
            QRect_setBottom(self.ptr, newBottom)
        }
    }

    public func moveBottom(to: Int32) {
        QRect_moveBottom(self.ptr, to)
    }

    public var bottomLeft: QPoint {
        get {
            return QPoint(ptr: QRect_bottomLeft(self.ptr))
        }
        set(newBottomLeft) {
            QRect_setBottomLeft(self.ptr, newBottomLeft.ptr)
        }
    }

    public func moveBottomLeft(to: QPoint) {
        QRect_moveBottomLeft(self.ptr, to.ptr)
    }

    public var left: Int32 {
        get {
            return QRect_left(self.ptr)
        }
        set(newLeft) {
            QRect_setLeft(self.ptr, newLeft)
        }
    }

    public func moveLeft(to: Int32) {
        QRect_moveLeft(self.ptr, to)
    }

    public var topLeft: QPoint {
        get {
            return QPoint(ptr: QRect_topLeft(self.ptr))
        }
        set(newTopLeft) {
            QRect_setTopLeft(self.ptr, newTopLeft.ptr)
        }
    }

    public func moveTopLeft(to: QPoint) {
        QRect_moveTopLeft(self.ptr, to.ptr)
    }

    public var top: Int32 {
        get {
            return QRect_top(self.ptr)
        }
        set(newTop) {
            QRect_setTop(self.ptr, newTop)
        }
    }

    public func moveTop(to: Int32) {
        QRect_moveTop(self.ptr, to)
    }

    public var topRight: QPoint {
        get {
            return QPoint(ptr: QRect_topRight(self.ptr))
        }
        set(newTopRight) {
            QRect_setTopRight(self.ptr, newTopRight.ptr)
        }
    }

    public func moveTopRight(to: QPoint) {
        QRect_moveTopRight(self.ptr, to.ptr)
    }

    public var right: Int32 {
        get {
            return QRect_right(self.ptr)
        }
        set(newRight) {
            QRect_setRight(self.ptr, newRight)
        }
    }

    public func moveRight(to: Int32) {
        QRect_moveRight(self.ptr, to)
    }

    public var bottomRight: QPoint {
        get {
            return QPoint(ptr: QRect_bottomRight(self.ptr))
        }
        set(newBottomRight) {
            QRect_setBottomRight(self.ptr, newBottomRight.ptr)
        }
    }

    public func moveBottomRight(to: QPoint) {
        QRect_moveBottomRight(self.ptr, to.ptr)
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

