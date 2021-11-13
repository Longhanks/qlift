import CQlift


open class QLayout: QObject, QLayoutItem {
    public var qtPtr: UnsafeMutableRawPointer! {
        ptr
    }

    public var swiftOwership: Bool {
        get { false }
        set {}
    }

    public var contentsMargins: QMargins {
        get { QMargins(ptr: QLayout_contentsMargins(self.ptr)) }
        set { QLayout_setContentsMargins(self.ptr, newValue.ptr) }
    }

    public var spacing: Int32 {
        get { QLayout_spacing(self.ptr) }
        set { QLayout_setSpacing(self.ptr, newValue) }
    }

    public var sizeConstraint: QLayoutSizeConstraint {
        get { QLayoutSizeConstraint(rawValue: QLayout_sizeConstraint(self.ptr)) }
        set { QLayout_setSizeConstraint(self.ptr, newValue.rawValue) }
    }

    public func indexOfItem(_ item: QLayoutItem) {
        QLayout_indexOfItem(ptr, item.qtPtr);
    }
    public func indexOfWidget(_ widget: QWidget) {
        QLayout_indexOfWidget(ptr, widget.ptr)
    }
    public func removeItem(_ item: QLayoutItem) {
        QLayout_removeItem(ptr, item.qtPtr)
    }
    public func removeWidget(_ widget: QWidget) {
        QLayout_removeWidget(ptr, widget.ptr)
    }

    func add(item: QLayoutItem) {}
    func add(widget: QWidget) {}
}
