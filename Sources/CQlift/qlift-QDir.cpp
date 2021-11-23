//
//  qlift-QDir.cpp
//  CQlift
//
//  Created by Dmitriy Borovikov on 23.11.2021.
//

#include <QDir>
#include "qlift-QDir.h"

[[maybe_unused]] void QDir_addSearchPath(const char *prefix, const char *path) {
    QDir::addSearchPath(prefix, path);
}
