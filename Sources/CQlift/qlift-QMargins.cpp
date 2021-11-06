#include <QMargins>

#include "qlift-QMargins.h"

[[maybe_unused]] void *QMargins_new(int left, int top, int right, int bottom) {
    return static_cast<void *>(new QMargins{left, top, right, bottom});
}

[[maybe_unused]] void QMargins_delete(void *margins) {
    delete static_cast<QMargins *>(margins);
}
