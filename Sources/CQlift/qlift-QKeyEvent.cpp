//
//  qlift-QKeyEvent.cpp
//  
//
//  Created by Dmitriy Borovikov on 25.11.2021.
//

#include <QKeyEvent>

#include "qlift-QKeyEvent.h"

[[maybe_unused]] bool QKeyEvent_matches(void *keyEvent, int key) {
    return static_cast<QKeyEvent *>(keyEvent)->matches(static_cast<QKeySequence::StandardKey>(key));
}

[[maybe_unused]] int QKeyEvent_count(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->count();
}

[[maybe_unused]] bool QKeyEvent_isAutoRepeat(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->isAutoRepeat();
}

[[maybe_unused]] int QKeyEvent_key(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->key();
}

[[maybe_unused]] int QKeyEvent_modifiers(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->modifiers();
}

[[maybe_unused]] quint32 QKeyEvent_nativeModifiers(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->nativeModifiers();
}

[[maybe_unused]] quint32 QKeyEvent_nativeScanCode(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->nativeScanCode();
}

[[maybe_unused]] quint32 QKeyEvent_nativeVirtualKey(void *keyEvent) {
    return static_cast<QKeyEvent *>(keyEvent)->nativeVirtualKey();
}

[[maybe_unused]] CQString QKeyEvent_text(void *keyEvent) {
    auto text = static_cast<QKeyEvent *>(keyEvent)->text();
    return CQString { text.utf16(), text.size() };
}
