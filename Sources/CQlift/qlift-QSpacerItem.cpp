#include <QSpacerItem>

#include "qlift-QSpacerItem.h"

[[maybe_unused]] void *
QSpacerItem_new(int w, int h, int hPolicy, int vPolicy) {
    return static_cast<void *>(
        new QSpacerItem{w,
                        h,
                        static_cast<QSizePolicy::Policy>(hPolicy),
                        static_cast<QSizePolicy::Policy>(vPolicy)});
}

[[maybe_unused]] void QSpacerItem_delete(void *spacerItem) {
    delete static_cast<QSpacerItem *>(spacerItem);
}
