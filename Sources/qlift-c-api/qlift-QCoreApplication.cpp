#include <QCoreApplication>

#include "qlift-QCoreApplication.h"

// NOLINTNEXTLINE(readability-non-const-parameter)
[[maybe_unused]] void *QCoreApplication_new(int *argc, char *argv[]) {
    return new QCoreApplication{*argc, argv};
}

[[maybe_unused]] void QCoreApplication_delete(void *coreApplication) {
    delete static_cast<QCoreApplication *>(coreApplication);
}

[[maybe_unused]] int QCoreApplication_exec(void) {
    return QCoreApplication::exec();
}

[[maybe_unused]] void QCoreApplication_exit(int returnCode) {
    QCoreApplication::exit(returnCode);
}
