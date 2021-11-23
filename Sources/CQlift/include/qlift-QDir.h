//
//  qlift-QDir.h
//  Qlift
//
//  Created by Dmitriy Borovikov on 23.11.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QDir_addSearchPath(const char *prefix, const char *path);

#ifdef __cplusplus
}
#endif
