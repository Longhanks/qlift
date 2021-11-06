#include <QGridLayout>

#include "qlift-QGridLayout.h"

[[maybe_unused]] void *QGridLayout_new(void *parent) {
    return static_cast<void *>(
        new QGridLayout{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QGridLayout_addItem(void *gridLayout,
                                          void *layoutItem,
                                          int row,
                                          int column,
                                          int rowSpan,
                                          int columnSpan,
                                          int alignment) {
    static_cast<QGridLayout *>(gridLayout)
        ->addItem(static_cast<QLayoutItem *>(layoutItem),
                  row,
                  column,
                  rowSpan,
                  columnSpan,
                  static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QGridLayout_addLayout(
    void *gridLayout, void *layout, int row, int column, int alignment) {
    static_cast<QGridLayout *>(gridLayout)
        ->addLayout(static_cast<QLayout *>(layout),
                    row,
                    column,
                    static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QGridLayout_addLayoutWithSpan(void *gridLayout,
                                                    void *layout,
                                                    int row,
                                                    int column,
                                                    int rowSpan,
                                                    int columnSpan,
                                                    int alignment) {
    static_cast<QGridLayout *>(gridLayout)
        ->addLayout(static_cast<QLayout *>(layout),
                    row,
                    column,
                    rowSpan,
                    columnSpan,
                    static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QGridLayout_addWidget(
    void *gridLayout, void *widget, int row, int column, int alignment) {
    static_cast<QGridLayout *>(gridLayout)
        ->addWidget(static_cast<QWidget *>(widget),
                    row,
                    column,
                    static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QGridLayout_addWidgetWithSpan(void *gridLayout,
                                                    void *widget,
                                                    int fromRow,
                                                    int fromColumn,
                                                    int rowSpan,
                                                    int columnSpan,
                                                    int alignment) {
    static_cast<QGridLayout *>(gridLayout)
        ->addWidget(static_cast<QWidget *>(widget),
                    fromRow,
                    fromColumn,
                    rowSpan,
                    columnSpan,
                    static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QGridLayout_setHorizontalSpacing(void *gridLayout, int spacing) {
    static_cast<QGridLayout *>(gridLayout)->setHorizontalSpacing(spacing);
}

[[maybe_unused]] int QGridLayout_horizontalSpacing(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->horizontalSpacing();
}

[[maybe_unused]] void QGridLayout_setVerticalSpacing(void *gridLayout, int spacing) {
    static_cast<QGridLayout *>(gridLayout)->setVerticalSpacing(spacing);
}

[[maybe_unused]] int QGridLayout_verticalSpacing(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->verticalSpacing();
}

[[maybe_unused]] void    QGridLayout_getItemPosition(void *gridLayout, int index, int *row, int *column, int *rowSpan, int *columnSpan) {
    static_cast<QGridLayout *>(gridLayout)->getItemPosition(index, row, column, rowSpan, columnSpan);
}

[[maybe_unused]] int    QGridLayout_columnCount(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->columnCount();
}

[[maybe_unused]] int    QGridLayout_columnMinimumWidth(void *gridLayout, int column) {
    return static_cast<QGridLayout *>(gridLayout)->columnMinimumWidth(column);
}

[[maybe_unused]] void    QGridLayout_setColumnMinimumWidth(void *gridLayout, int column, int minSize) {
    static_cast<QGridLayout *>(gridLayout)->setColumnMinimumWidth(column, minSize);
}

[[maybe_unused]] int    QGridLayout_columnStretch(void *gridLayout, int column) {
    return static_cast<QGridLayout *>(gridLayout)->columnStretch(column);
}

[[maybe_unused]] void    QGridLayout_setColumnStretch(void *gridLayout, int column, int stretch) {
    static_cast<QGridLayout *>(gridLayout)->setColumnStretch(column, stretch);
}

[[maybe_unused]] int    QGridLayout_rowCount(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->rowCount();
}

[[maybe_unused]] int    QGridLayout_rowMinimumHeight(void *gridLayout, int row) {
    return static_cast<QGridLayout *>(gridLayout)->rowMinimumHeight(row);
}

[[maybe_unused]] void    QGridLayout_setRowMinimumHeight(void *gridLayout, int row, int minSize) {
    static_cast<QGridLayout *>(gridLayout)->setRowMinimumHeight(row, minSize);
}

[[maybe_unused]] int    QGridLayout_rowStretch(void *gridLayout, int row) {
    return static_cast<QGridLayout *>(gridLayout)->rowStretch(row);
}

[[maybe_unused]] void    QGridLayout_setRowStretch(void *gridLayout, int row, int stretch) {
    static_cast<QGridLayout *>(gridLayout)->setRowStretch(row, stretch);
}

[[maybe_unused]] void    QGridLayout_setSpacing(void *gridLayout, int spacing) {
    static_cast<QGridLayout *>(gridLayout)->setSpacing(spacing);
}

[[maybe_unused]] int    QGridLayout_spacing(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->spacing();
}

[[maybe_unused]] int    QGridLayout_count(void *gridLayout) {
    return static_cast<QGridLayout *>(gridLayout)->count();
}
