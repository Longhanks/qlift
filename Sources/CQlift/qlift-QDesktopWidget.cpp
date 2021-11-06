#include <QDesktopWidget>

#include "qlift-QDesktopWidget.h"

[[maybe_unused]] void *
QDesktopWidget_availableGeometryWidget(void *desktopWidget, void *widget) {
    QRect stackRect = static_cast<QDesktopWidget *>(desktopWidget)
                          ->availableGeometry(static_cast<QWidget *>(widget));
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}
