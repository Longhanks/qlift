#include <QMenu>

#include "qlift-QMenu.h"

[[maybe_unused]] void *QMenu_new(const char *title, void *parent) {
    if (title != nullptr) {
        return static_cast<void *>(
            new QMenu{title, static_cast<QWidget *>(parent)});
    }
    return static_cast<void *>(new QMenu{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] const ushort *QMenu_title(void *menu, int *len) {
    auto text = static_cast<QMenu *>(menu)->title();
    *len = text.size();
    return text.utf16();
}

[[maybe_unused]] void QMenu_setTitle(void *menu, const char *title) {
    static_cast<QMenu *>(menu)->setTitle(title);
}

[[maybe_unused]] void *QMenu_menuAction(void *menu) {
    return static_cast<void *>(static_cast<QMenu *>(menu)->menuAction());
}
