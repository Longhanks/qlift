import CQlift

public protocol QLayout: QLayoutItem {
    func add(item: QLayoutItem)
    func add(widget: QWidget)
}

