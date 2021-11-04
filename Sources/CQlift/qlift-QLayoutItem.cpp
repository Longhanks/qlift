#include <QLayoutItem>

#include "qlift-QLayoutItem.h"

[[maybe_unused]] unsigned int QLayoutItem_alignment(void *layoutItem) {
    return static_cast<QLayoutItem *>(layoutItem)->alignment();
}

[[maybe_unused]] void QLayoutItem_setAlignment(void *layoutItem,
                                               int alignment) {
    static_cast<QLayoutItem *>(layoutItem)
        ->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}
