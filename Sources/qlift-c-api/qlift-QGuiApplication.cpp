#include <QGuiApplication>

#include "qlift-QGuiApplication.h"

// NOLINTNEXTLINE(readability-non-const-parameter)
[[maybe_unused]] void *QGuiApplication_new(int *argc, char *argv[]) {
    return new QGuiApplication{*argc, argv};
}

[[maybe_unused]] void QGuiApplication_delete(void *guiApplication) {
    delete static_cast<QGuiApplication *>(guiApplication);
}
