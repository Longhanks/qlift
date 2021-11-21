//
//  qlift-QResource.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QResource_new();
LIBRARY_API void QResource_delete(void *resource);
LIBRARY_API void *QResource_new_from_file(const char *fileName);

LIBRARY_API bool QResource_registerResource(const char *rccFilename);
LIBRARY_API bool QResource_unregisterResource(const char *rccFilename);
LIBRARY_API bool QResource_registerResource_data(const unsigned char *rccData);
LIBRARY_API bool QResource_unregisterResource_data(const unsigned char *rccData);

#ifdef __cplusplus
}
#endif
