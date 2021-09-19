import CQlift


open class QGridLayout: QObject, QLayout {
    // Irrelevant because QGridLayout is a QObject.
    public var needsDelete = false

    public init(parent: QWidget? = nil) {
        super.init(ptr: QGridLayout_new(parent?.ptr), parent: parent)
    }

    init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    public var horizontalSpacing: Int32 {
        get { QGridLayout_horizontalSpacing(ptr) }
        set { QGridLayout_setHorizontalSpacing(ptr, newValue) }
    }

    public var verticalSpacing: Int32 {
        get { QGridLayout_verticalSpacing(ptr) }
        set { QGridLayout_setVerticalSpacing(ptr, spacing) }
    }

    public func add(item: QLayoutItem) {
        fatalError("Not implemented")
    }

    public func add(widget: QWidget) {
        fatalError("Not implemented")
    }

    public func add(item: QLayoutItem, row: Int32, column: Int32, rowSpan: Int32 = 1, columnSpan: Int32 = 1, alignment: Qt.Alignment = Qt.Alignment(rawValue: 0)) {
        QGridLayout_addItem(self.ptr, item.ptr, row, column, rowSpan, columnSpan, alignment.rawValue)
    }

    public func add(layout: QLayout, row: Int32, column: Int32, alignment: Qt.Alignment = Qt.Alignment(rawValue: 0)) {
        QGridLayout_addLayout(self.ptr, layout.ptr, row, column, alignment.rawValue)
    }

    public func add(layout: QLayout, row: Int32, column: Int32, rowSpan: Int32, columnSpan: Int32, alignment: Qt.Alignment = Qt.Alignment(rawValue: 0)) {
        QGridLayout_addLayoutWithSpan(self.ptr, layout.ptr, row, column, rowSpan, columnSpan, alignment.rawValue)
    }

    public func add(widget: QWidget, row: Int32, column: Int32, alignment: Qt.Alignment = Qt.Alignment(rawValue: 0)) {
        QGridLayout_addWidget(self.ptr, widget.ptr, row, column, alignment.rawValue)
    }

    public func add(widget: QWidget, fromRow: Int32, fromColumn: Int32, rowSpan: Int32, columnSpan: Int32, alignment: Qt.Alignment = Qt.Alignment(rawValue: 0)) {
        QGridLayout_addWidgetWithSpan(self.ptr, widget.ptr, fromRow, fromColumn, rowSpan, columnSpan, alignment.rawValue)
    }

    deinit {
        checkDeleteQtObj(QGridLayout_delete)
    }
}


