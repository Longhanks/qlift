import CQlift


public protocol QLayout: QLayoutItem {
    func add(item: QLayoutItem)
    func add(widget: QWidget)
}

extension QLayout {
    public var contentsMargins: QMargins {
        get {
            return QMargins(ptr: QLayout_contentsMargins(self.ptr))
        }
        set(newContentsMargins) {
            QLayout_setContentsMargins(self.ptr, newContentsMargins.ptr)
        }
    }

    public var spacing: Int32 {
        get {
            return QLayout_spacing(self.ptr)
        }
        set(newSpacing) {
            QLayout_setSpacing(self.ptr, newSpacing)
        }
    }

    public var sizeConstraint: QLayoutSizeConstraint {
        get {
            return QLayoutSizeConstraint(rawValue: QLayout_sizeConstraint(self.ptr))
        }
        set(newSizeConstraint) {
            QLayout_setSizeConstraint(self.ptr, newSizeConstraint.rawValue)
        }
    }
}
