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

#pragma clang assume_nonnull begin
LIBRARY_API void DispatchToQTMainThread(void *callBackObject, void (*callback)(void *));
#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
