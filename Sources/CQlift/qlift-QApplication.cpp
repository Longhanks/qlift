#include <QApplication>
#include <QIcon>

#include "qlift-QApplication.h"

// NOLINTNEXTLINE(readability-non-const-parameter)
[[maybe_unused]] void *QApplication_new(int *argc, char *argv[]) {
    return static_cast<void *>(new QApplication{*argc, argv});
}

[[maybe_unused]] void *QApplication_desktop(void) {
    return static_cast<void *>(QApplication::desktop());
}

[[maybe_unused]] bool QApplication_set_style(void *application, const char *style) {
    return static_cast<QApplication *>(application)->setStyle(QString(style)) != nullptr;
}

[[maybe_unused]] void QApplication_setWindowIcon(void *application, void *icon) {
    static_cast<QApplication *>(application)->setWindowIcon(*static_cast<QIcon *>(icon));
}

[[maybe_unused]] void *QApplication_windowIcon(void *application) {
    auto wicon = static_cast<QApplication *>(application)->windowIcon();
    return new QIcon(wicon);
}
