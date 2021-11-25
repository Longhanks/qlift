//
//  qlift-QKeyEvent.h
//  
//
//  Created by Dmitriy Borovikov on 25.11.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API bool QKeyEvent_matches(void *keyEvent, int key);
LIBRARY_API int QKeyEvent_count(void *keyEvent);
LIBRARY_API bool QKeyEvent_isAutoRepeat(void *keyEvent);
LIBRARY_API int QKeyEvent_key(void *keyEvent);
LIBRARY_API int QKeyEvent_modifiers(void *keyEvent);
LIBRARY_API unsigned int QKeyEvent_nativeModifiers(void *keyEvent);
LIBRARY_API unsigned int QKeyEvent_nativeScanCode(void *keyEvent);
LIBRARY_API unsigned int QKeyEvent_nativeVirtualKey(void *keyEvent);
LIBRARY_API CQString QKeyEvent_text(void *keyEvent);

#ifdef __cplusplus
}
#endif
