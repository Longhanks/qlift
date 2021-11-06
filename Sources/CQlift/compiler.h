#pragma once

#ifdef __cplusplus
#define LIBRARY_API [[maybe_unused]]
#else
#define LIBRARY_API
typedef unsigned short ushort;
#endif
