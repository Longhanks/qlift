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

[[maybe_unused]] void QBoxLayout_setStretch(void *boxLayout, int index, int stretch) {
    static_cast<QBoxLayout *>(boxLayout)->setStretch(index, stretch);
}

[[maybe_unused]] int QBoxLayout_stretch(void *boxLayout, int index) {
    return static_cast<QBoxLayout *>(boxLayout)->stretch(index);
}

[[maybe_unused]] void *QBoxLayout_geometry(void *boxLayout) {
    auto stackRect = static_cast<QBoxLayout *>(boxLayout)->geometry();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] void QBoxLayout_setGeometry(void *boxLayout, void *rect) {
    if (rect != nullptr) {
        static_cast<QBoxLayout *>(boxLayout)->setGeometry(
                                                    *static_cast<QRect *>(rect));
    } else {
        static_cast<QBoxLayout *>(boxLayout)->setGeometry(QRect());
    }
}

[[maybe_unused]] int QBoxLayout_count(void *boxLayout) {
    return static_cast<QBoxLayout *>(boxLayout)->count();
}
