#include <QTimer>

#include "qlift-QTimer.h"


[[maybe_unused]] void *QTimer_new(void *parent) {
    return static_cast<void *>(
                               new QTimer{static_cast<QObject *>(parent)});
}

[[maybe_unused]] void QTimer_delete(void *timer) {
    delete static_cast<QTimer *>(timer);
}

[[maybe_unused]] void QTimer_singleShot(int msec,
                                        int timerType,
                                        void *context,
                                        void (*slot_ptr)(void *)) {
    QTimer::singleShot(msec,
                       static_cast<Qt::TimerType>(timerType),
                       [context, slot_ptr]() { (*slot_ptr)(context); });
}

[[maybe_unused]] void QTimer_connect(void *timer,
                                     void *receiver,
                                     void *context,
                                     void (*slot_ptr)(void *)) {
    QObject::connect(static_cast<QTimer *>(timer),
                     &QTimer::timeout,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}

[[maybe_unused]] void QTimer_startms(void *timer, int msec) {
    static_cast<QTimer *>(timer)->start(msec);
}

[[maybe_unused]] void QTimer_start(void *timer) {
    static_cast<QTimer *>(timer)->start();
}

[[maybe_unused]] void QTimer_stop(void *timer) {
    static_cast<QTimer *>(timer)->stop();
}
