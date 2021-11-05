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

    public var spacing: Int32 {
        get { QGridLayout_spacing(ptr) }
        set { QGridLayout_setSpacing(ptr, newValue) }
    }

    public var columnCount: Int32 {
        get { QGridLayout_columnCount(ptr) }
    }

    public var rowCount: Int32 {
        get { QGridLayout_rowCount(ptr) }
    }

    public func getItemPosition(index: Int32) -> (row: Int32, column: Int32, rowSpan: Int32, columnSpan: Int32) {
        var row: Int32 = 0
        var column: Int32 = 0
        var rowSpan: Int32 = 0
        var columnSpan: Int32 = 0

        QGridLayout_getItemPosition(ptr, index, &row, &column, &rowSpan, &columnSpan)
        return (row: row, column: column, rowSpan: rowSpan, columnSpan: columnSpan)
    }

    public func columnMinimumWidth(column: Int32) -> Int32 {
        QGridLayout_columnMinimumWidth(ptr, column)
    }

    public func setColumnMinimumWidth(column: Int32, minSize: Int32) {
        QGridLayout_setColumnMinimumWidth(ptr, column, minSize)
    }

    public func columnStretch(column: Int32) -> Int32 {
        QGridLayout_columnStretch(ptr, column)
    }

    public func setColumnStretch(column: Int32, stretch: Int32) {
        QGridLayout_setColumnStretch(ptr, column, stretch)
    }

    public func rowMinimumHeight(row: Int32) -> Int32 {
        QGridLayout_rowMinimumHeight(ptr, row)
    }

    public func setRowMinimumHeight(row: Int32, minSize: Int32) {
        QGridLayout_setRowMinimumHeight(ptr, row, minSize)
    }

    public func rowStretch(row: Int32) -> Int32 {
        QGridLayout_rowStretch(ptr, row)
    }

    public func setRowStretch(row: Int32, stretch: Int32) {
        QGridLayout_setRowStretch(ptr, row, stretch)
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
        checkDeleteQtObj()
    }
}
