//
//  qlift-QTouchDevice.cpp
//  
//
//  Created by Dmitriy Borovikov on 01.02.2022.
//

#include <QTouchDevice>
#include "qlift-QTouchDevice.h"

[[maybe_unused]] void *QTouchDevice_new() {
    return static_cast<QTouchDevice *>(new QTouchDevice());
}
[[maybe_unused]] void QTouchDevice_delete(void *touchDevice) {
    delete static_cast<QTouchDevice *>(touchDevice);
}
[[maybe_unused]] int QTouchDevice_capabilities(void *touchDevice) {
    return static_cast<QTouchDevice *>(touchDevice)->capabilities();
}
[[maybe_unused]] int QTouchDevice_maximumTouchPoints(void *touchDevice) {
    return static_cast<QTouchDevice *>(touchDevice)->maximumTouchPoints();
}
[[maybe_unused]] CQString QTouchDevice_name(void *touchDevice) {
    auto text = static_cast<QTouchDevice *>(touchDevice)->name();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] void QTouchDevice_setCapabilities(void *touchDevice, int caps) {
    static_cast<QTouchDevice *>(touchDevice)->setCapabilities(static_cast<QTouchDevice::Capabilities>(caps));
}
[[maybe_unused]] void QTouchDevice_setMaximumTouchPoints(void *touchDevice, int max) {
    static_cast<QTouchDevice *>(touchDevice)->setMaximumTouchPoints(max);
}
[[maybe_unused]] void QTouchDevice_setName(void *touchDevice, const char *name) {
    static_cast<QTouchDevice *>(touchDevice)->setName(name);
}
[[maybe_unused]] void QTouchDevice_setType(void *touchDevice, int devType) {
    static_cast<QTouchDevice *>(touchDevice)->setType(static_cast<QTouchDevice::DeviceType>(devType));
}
[[maybe_unused]] int QTouchDevice_type(void *touchDevice) {
    return static_cast<QTouchDevice *>(touchDevice)->type();
}
