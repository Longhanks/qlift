#include <QGuiApplication>

#include "qlift-QGuiApplication.h"

// NOLINTNEXTLINE(readability-non-const-parameter)
[[maybe_unused]] void *QGuiApplication_new(int *argc, char *argv[]) {
    return new QGuiApplication{*argc, argv};
}

[[maybe_unused]] void QGuiApplication_setAttribute(int attribute, bool on) {
    QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

[[maybe_unused]] bool QGuiApplication_testAttribute(int attribute) {
    return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}
