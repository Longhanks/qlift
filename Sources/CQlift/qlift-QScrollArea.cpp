#include <QScrollArea>

#include "qlift-QScrollArea.h"

[[maybe_unused]] void *QScrollArea_new(void *parent) {
    return static_cast<void *>(
        new QScrollArea{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void    QScrollArea_setWidget(void *scrollArea, void *widget) {
    static_cast<QScrollArea *>(scrollArea)->setWidget(static_cast<QWidget *>(widget));
}

[[maybe_unused]] void    QScrollArea_ensureVisible(void *scrollArea, int x, int y, int xmargin, int ymargin) {
    static_cast<QScrollArea *>(scrollArea)->ensureVisible(x, y, xmargin, ymargin);
}

[[maybe_unused]] void    QScrollArea_ensureWidgetVisible(void *scrollArea, void *childWidget, int xmargin, int ymargin) {
    static_cast<QScrollArea *>(scrollArea)->ensureWidgetVisible(static_cast<QWidget *>(childWidget), xmargin, ymargin);
}

[[maybe_unused]] int     QScrollArea_alignment(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->alignment();
}

[[maybe_unused]] void    QScrollArea_setAlignment(void *scrollArea, int alignment) {
    static_cast<QScrollArea *>(scrollArea)->setAlignment(static_cast<Qt::Alignment>(alignment));
}

[[maybe_unused]] void    QScrollArea_setWidgetResizable(void *scrollArea, bool resizable) {
    static_cast<QScrollArea *>(scrollArea)->setWidgetResizable(resizable);
}

[[maybe_unused]] bool    QScrollArea_widgetResizable(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->widgetResizable();
}

[[maybe_unused]] int     QScrollArea_sizeAdjustPolicy(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->sizeAdjustPolicy();
}

[[maybe_unused]] void    QScrollArea_setHorizontalScrollBarPolicy(void *scrollArea, int scrollBarPolicy) {
    static_cast<QScrollArea *>(scrollArea)->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(scrollBarPolicy));
}

[[maybe_unused]] void    QScrollArea_setVerticalScrollBarPolicy(void *scrollArea, int scrollBarPolicy) {
    static_cast<QScrollArea *>(scrollArea)->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(scrollBarPolicy));
}

[[maybe_unused]] int    QScrollArea_horizontalScrollBarPolicy(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->horizontalScrollBarPolicy();
}

[[maybe_unused]] int    QScrollArea_verticalScrollBarPolicy(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->verticalScrollBarPolicy();
}

[[maybe_unused]] void    QScrollArea_setSizeAdjustPolicy(void *scrollArea, int sizeAdjustPolicy) {
    static_cast<QScrollArea *>(scrollArea)->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(sizeAdjustPolicy));
}

[[maybe_unused]] void *QScrollArea_verticalScrollBar(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->verticalScrollBar();
}

[[maybe_unused]] void *QScrollArea_horizontalScrollBar(void *scrollArea) {
    return static_cast<QScrollArea *>(scrollArea)->horizontalScrollBar();
}
