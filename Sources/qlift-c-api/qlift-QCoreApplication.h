#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QCoreApplication_new(int *argc, char *argv[]);

LIBRARY_API void QCoreApplication_delete(void *coreApplication);

LIBRARY_API int QCoreApplication_exec(void);

LIBRARY_API void QCoreApplication_exit(int returnCode);

#ifdef __cplusplus
}
#endif
