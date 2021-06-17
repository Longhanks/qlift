#include <QGridLayout>

#include "qlift-QGridLayout.h"

[[maybe_unused]] void *QGridLayout_new(void *parent) {
    return static_cast<void *>(
        new QGridLayout{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QGridLayout_delete(void *gridLayout) {
    delete static_cast<QGridLayout *>(gridLayout);
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
