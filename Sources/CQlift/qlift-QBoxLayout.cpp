#include <QBoxLayout>

#include "qlift-QBoxLayout.h"

[[maybe_unused]] void *QBoxLayout_new(int direction, void *parent) {
    return static_cast<void *>(new QBoxLayout{QBoxLayout::Direction(direction),
                                              static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QBoxLayout_addItem(void *boxLayout, void *layoutItem) {
    static_cast<QBoxLayout *>(boxLayout)->addItem(
        static_cast<QLayoutItem *>(layoutItem));
}

[[maybe_unused]] void
QBoxLayout_addLayout(void *boxLayout, void *layout, int stretch) {
    static_cast<QBoxLayout *>(boxLayout)->addLayout(
        static_cast<QLayout *>(layout), stretch);
}

[[maybe_unused]] void QBoxLayout_addWidget(void *boxLayout,
                                           void *widget,
                                           int stretch,
                                           int alignment) {
    static_cast<QBoxLayout *>(boxLayout)->addWidget(
        static_cast<QWidget *>(widget),
        stretch,
        static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}
