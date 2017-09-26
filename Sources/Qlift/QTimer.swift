import CQlift


open class QTimer: QObject {
    public static func singleShot(msec: Int32, timerType: Qt.TimerType, handler: @escaping @convention(c) () -> Void) {
        QTimer_singleShot(msec, timerType.rawValue, handler)
    }
}

