//
//  qlift-QTouchEvent.cpp
//  
//
//  Created by Dmitriy Borovikov on 29.01.2022.
//

#include <QTouchEvent>
#include "qlift-QTouchEvent.h"

[[maybe_unused]] void QTouchEvent_delete(void *touchEvent) {
    delete static_cast<QTouchEvent *>(touchEvent);
}
[[maybe_unused]] void *QTouchEvent_window(void *touchEvent) {
    return static_cast<QTouchEvent *>(touchEvent)->window();
}
[[maybe_unused]] void *QTouchEvent_target(void *touchEvent) {
    return static_cast<QTouchEvent *>(touchEvent)->target();
}
[[maybe_unused]] int QTouchEvent_touchPointStates(void *touchEvent) {
    return static_cast<QTouchEvent *>(touchEvent)->touchPointStates();
}
//[[maybe_unused]] void *QTouchEvent_touchPoints(void *touchEvent) {
//    auto list = static_cast<QTouchEvent *>(touchEvent)->touchPoints();
//    return &list;
//}
[[maybe_unused]] void *QTouchEvent_device(void *touchEvent) {
    return static_cast<QTouchEvent *>(touchEvent)->device();
}
