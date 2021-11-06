//
//  QGraphicsDropShadowEffect.h
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API bool QGraphicsEffect_isEnabled(void *graphicsEffect);
LIBRARY_API void QGraphicsEffect_setEnabled(void *graphicsEffect, bool enable);
LIBRARY_API void QGraphicsEffect_update(void *graphicsEffect);

#ifdef __cplusplus
}
#endif
