//
//  qlift-dispatchToQThread.h
//  
//
//  Created by Dmitriy Borovikov on 19.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void DispatchToQTMainThread(void *callBackObject, void (*callback)(void *));

#ifdef __cplusplus
}
#endif
