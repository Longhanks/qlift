//
//  QTouchEvent.h
//  
//
//  Created by Dmitriy Borovikov on 29.01.2022.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QTouchEvent_window(void *touchEvent);
LIBRARY_API void *QTouchEvent_target(void *touchEvent);
LIBRARY_API int QTouchEvent_touchPointStates(void *touchEvent);
LIBRARY_API void *QTouchEvent_touchPoints(void *touchEvent);
LIBRARY_API void *QTouchEvent_device(void *touchEvent);

#ifdef __cplusplus
}
#endif
