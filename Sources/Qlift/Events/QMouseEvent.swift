import CQlift

public class QMouseEvent: QInputEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var button: Qt.MouseButton {
        get { Qt.MouseButton(rawValue: QMouseEvent_button(self.ptr)) }
    }

    public func buttons() -> Qt.MouseButton {
        Qt.MouseButton(rawValue: QMouseEvent_buttons(ptr))
    }

    public func flags() -> Qt.MouseEventFlag {
        Qt.MouseEventFlag(rawValue: QMouseEvent_flags(ptr))
    }

    public func source() -> Qt.MouseEventSource {
        Qt.MouseEventSource(rawValue: QMouseEvent_source(ptr)) ?? .MouseEventNotSynthesized
    }

    public func globalX() -> Int32 {
        QMouseEvent_globalX(ptr)
    }

    public func globalY() -> Int32 {
        QMouseEvent_globalY(ptr)
    }

    public func x() -> Int32 {
        QMouseEvent_x(ptr)
    }

    public func y() -> Int32 {
        QMouseEvent_y(ptr)
    }

    public func globalPos() -> QPoint {
        QPoint(ptr: QMouseEvent_globalPos(ptr))
    }

    public func pos() -> QPoint {
        QPoint(ptr: QMouseEvent_pos(ptr))
    }
}
