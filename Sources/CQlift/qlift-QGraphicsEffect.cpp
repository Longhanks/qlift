//
//  QGraphicsEffect.cpp
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

#include <QGraphicsEffect>
#include "qlift-QGraphicsEffect.h"

[[maybe_unused]] bool QGraphicsEffect_isEnabled(void *graphicsEffect) {
    return static_cast<QGraphicsEffect *>(graphicsEffect)->isEnabled();
}

[[maybe_unused]] void QGraphicsEffect_setEnabled(void *graphicsEffect, bool enable) {
    static_cast<QGraphicsEffect *>(graphicsEffect)->setEnabled(enable);
}

[[maybe_unused]] void QGraphicsEffect_update(void *graphicsEffect) {
    static_cast<QGraphicsEffect *>(graphicsEffect)->update();
}

