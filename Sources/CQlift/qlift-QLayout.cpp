#include <QLayout>

#include "qlift-QLayout.h"

[[maybe_unused]] bool QLayout_isEnabled(void *layout) {
    return static_cast<QLayout *>(layout)->isEnabled();
}

[[maybe_unused]] void QLayout_setEnabled(void *layout, bool enabled) {
    static_cast<QLayout *>(layout)->setEnabled(enabled);
}

[[maybe_unused]] void *QLayout_contentsMargins(void *layout) {
    auto stackMargins = static_cast<QLayout *>(layout)->contentsMargins();
    return static_cast<void *>(new QMargins{stackMargins.left(),
                                            stackMargins.top(),
                                            stackMargins.right(),
                                            stackMargins.bottom()});
}

[[maybe_unused]] void QLayout_setContentsMargins(void *layout,
                                                 void *contentsMargins) {
    static_cast<QLayout *>(layout)->setContentsMargins(
        *static_cast<QMargins *>(contentsMargins));
}

[[maybe_unused]] int QLayout_spacing(void *layout) {
    return static_cast<QLayout *>(layout)->spacing();
}

[[maybe_unused]] void QLayout_setSpacing(void *layout, int spacing) {
    static_cast<QLayout *>(layout)->setSpacing(spacing);
}

[[maybe_unused]] int QLayout_sizeConstraint(void *layout) {
    return static_cast<QLayout *>(layout)->sizeConstraint();
}

[[maybe_unused]] void QLayout_setSizeConstraint(void *layout,
                                                int sizeConstraint) {
    static_cast<QLayout *>(layout)->setSizeConstraint(
        static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

[[maybe_unused]] int QLayout_indexOfItem(void *layout, void *layoutItem) {
    return static_cast<QLayout *>(layout)->indexOf(static_cast<QLayoutItem*>(layoutItem));
}
[[maybe_unused]] int QLayout_indexOfWidget(void *layout, void *widget) {
    return static_cast<QLayout *>(layout)->indexOf(static_cast<QWidget*>(widget));
}
[[maybe_unused]] void *QLayout_parentWidget(void *layout) {
    return static_cast<QLayout *>(layout)->parentWidget();
}
[[maybe_unused]] void QLayout_removeItem(void *layout, void *item) {
    static_cast<QLayout *>(layout)->removeItem(static_cast<QLayoutItem*>(item));
}
[[maybe_unused]] void QLayout_removeWidget(void *layout, void *widget) {
    static_cast<QLayout *>(layout)->removeWidget(static_cast<QWidget *>(widget));
}
[[maybe_unused]] void QLayout_removeWidgetAt(void *layout, int index) {
    auto item = static_cast<QLayout *>(layout)->itemAt(index);
    if (item == nullptr) return;
    auto widget = item->widget();
    if (widget == nullptr) return;
    static_cast<QLayout *>(layout)->removeWidget(widget);
}
[[maybe_unused]] void QLayout_removeItemAt(void *layout, int index) {
    auto item = static_cast<QLayout *>(layout)->itemAt(index);
    if (item == nullptr) return;
    static_cast<QLayout *>(layout)->removeItem(item);
}
