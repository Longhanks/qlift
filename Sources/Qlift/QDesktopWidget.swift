import CQlift


public class QDesktopWidget: QWidget {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public func availableGeometry(for widget: QWidget) -> QRect {
        let rectPtr: UnsafeMutableRawPointer = QDesktopWidget_availableGeometryWidget(self.ptr, widget.ptr)
        return QRect(ptr: rectPtr)
    }
}

