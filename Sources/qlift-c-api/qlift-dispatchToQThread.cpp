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
    // any thread
    QTimer* timer = new QTimer();
    timer->moveToThread(QApplication::instance()->thread());
    timer->setSingleShot(true);
    QObject::connect(timer,
                     &QTimer::timeout,
                     [=]()
    {
        // main thread
        callback(callBackObject);
        timer->deleteLater();
    });
    QMetaObject::invokeMethod(timer, "start", Qt::QueuedConnection, Q_ARG(int, 0));
}
