import CQlift


public protocol QLayout: QLayoutItem {
    func add(item: QLayoutItem)
    func add(widget: QWidget)
}

extension QLayout {
    public var sizeConstraint: QLayoutSizeConstraint {
        get {
            return QLayoutSizeConstraint(rawValue: QLayout_sizeConstraint(self.ptr))
        }
        set(newSizeConstraint) {
            QLayout_setSizeConstraint(self.ptr, newSizeConstraint.rawValue)
        }
    }
}

