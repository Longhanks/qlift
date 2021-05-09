#include <QSizePolicy>

#include "qlift-QSizePolicy.h"

[[maybe_unused]] void *
QSizePolicy_new(int horizontal, int vertical, int type) {
    return static_cast<void *>(
        new QSizePolicy{static_cast<QSizePolicy::Policy>(horizontal),
                        static_cast<QSizePolicy::Policy>(vertical),
                        static_cast<QSizePolicy::ControlType>(type)});
}

[[maybe_unused]] void QSizePolicy_delete(void *sizePolicy) {
    delete static_cast<QSizePolicy *>(sizePolicy);
}
