import CQlift


public class QDesktopWidget: QWidget {
    init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr, parent: nil)
    }

    public func availableGeometry(for widget: QWidget) -> QRect {
        let rectPtr: UnsafeMutableRawPointer = QDesktopWidget_availableGeometryWidget(self.ptr, widget.ptr)
        return QRect(ptr: rectPtr)
    }
}

