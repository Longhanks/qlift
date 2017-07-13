import CQlift


open class QBoxLayout: QObject, QLayout {
    public init(direction: Int32 = 0, parent: QWidget? = nil) {
        super.init(ptr: QBoxLayout_new(direction, parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public func add(item: QLayoutItem) {
        QBoxLayout_addItem(self.ptr, item.ptr)
    }

    public func add(layout: QLayout, stretch: Int32 = 0) {
        QBoxLayout_addLayout(self.ptr, layout.ptr, stretch)
    }

    public func add(widget: QWidget, stretch: Int32 = 0, alignment: Int32 = 0) {
        QBoxLayout_addWidget(self.ptr, widget.ptr, stretch, alignment)
    }

    public func add(widget: QWidget) {
        self.add(widget: widget, stretch: 0, alignment: 0)
    }

    deinit {
        if self.ptr != nil {
            if QObject_parent(self.ptr) != nil {
                QBoxLayout_delete(self.ptr)
                self.ptr = nil
            }
        }
    }
}


