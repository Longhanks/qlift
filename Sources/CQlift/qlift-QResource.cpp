//
//  qlift-QResource.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QResource>

#include "qlift-QResource.h"

[[maybe_unused]] void *QResource_new() {
    return static_cast<void *>( new QResource() );
}

[[maybe_unused]] void QResource_delete(void *resource) {
    delete static_cast<QResource *>(resource);
}

[[maybe_unused]] void *QResource_new_from_file(const char *fileName) {
    return static_cast<void *>( new QResource {fileName} );
}


[[maybe_unused]] bool QResource_registerResource(const char *rccFilename) {
    return QResource::registerResource(QString(rccFilename));
}

[[maybe_unused]] bool QResource_unregisterResource(const char *rccFilename) {
    return QResource::unregisterResource(QString(rccFilename));
}

[[maybe_unused]] bool QResource_registerResource_data(const uchar *rccData) {
    return QResource::registerResource(rccData);
}

[[maybe_unused]] bool QResource_unregisterResource_data(const uchar *rccData) {
    return QResource::unregisterResource(rccData);
}
