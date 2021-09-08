#include <QStatusBar>

#include "qlift-QStatusBar.h"

[[maybe_unused]] void *QStatusBar_new(void *parent) {
    return static_cast<void *>(new QStatusBar{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QStatusBar_delete(void *statusBar) {
    delete static_cast<QStatusBar *>(statusBar);
}

[[maybe_unused]] void QStatusBar_addPermanentWidget(void *statusBar, void *widget, int stretch) {
    static_cast<QStatusBar *>(statusBar)->addPermanentWidget(static_cast<QWidget *>(widget), stretch);
}

[[maybe_unused]] void QStatusBar_addWidget(void *statusBar, void *widget, int stretch) {
    static_cast<QStatusBar *>(statusBar)->addWidget(static_cast<QWidget *>(widget), stretch);
}

[[maybe_unused]] int  QStatusBar_insertPermanentWidget(void *statusBar, int index, void *widget, int stretch) {
    return static_cast<QStatusBar *>(statusBar)->insertPermanentWidget(index, static_cast<QWidget *>(widget), stretch);
}

[[maybe_unused]] int  QStatusBar_insertWidget(void *statusBar, int index, void *widget, int stretch) {
    return static_cast<QStatusBar *>(statusBar)->insertWidget(index, static_cast<QWidget *>(widget), stretch);
}

[[maybe_unused]] void QStatusBar_removeWidget(void *statusBar, void *widget) {
    static_cast<QStatusBar *>(statusBar)->removeWidget(static_cast<QWidget *>(widget));
}

[[maybe_unused]] bool QStatusBar_isSizeGripEnabled(void *statusBar) {
    return static_cast<QStatusBar *>(statusBar)->isSizeGripEnabled();
}

[[maybe_unused]] void QStatusBar_setSizeGripEnabled(void *statusBar, bool enabled) {
    static_cast<QStatusBar *>(statusBar)->setSizeGripEnabled(enabled);
}

[[maybe_unused]] void QStatusBar_clearMessage(void *statusBar) {
    static_cast<QStatusBar *>(statusBar)->clearMessage();
}

[[maybe_unused]] void QStatusBar_showMessage(void *statusBar, const char *message, int timeout) {
    static_cast<QStatusBar *>(statusBar)->showMessage(message, timeout);
}
