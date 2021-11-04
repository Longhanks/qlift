//
//  qlift-dispatchToQThread.cpp
//  
//
//  Created by Dmitriy Borovikov on 19.05.2021.
//

#include <QTimer>
#include <QApplication>
#include "qlift-dispatchToQThread.h"

// Must call
// callback(void *object)
[[maybe_unused]] void DispatchToQTMainThread(void *callBackObject, void (*callback)(void *))
{
    // start on any thread (from QT 5.10)
    QMetaObject::invokeMethod(QApplication::instance(),
                              [=]()
    {
        // invoke on the main thread
        callback(callBackObject);
    });
}
