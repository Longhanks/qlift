//
//  QTouchEvent.swift
//  
//
//  Created by Dmitriy Borovikov on 29.01.2022.
//

import CQlift

public class QTouchEvent: QInputEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
    
    public func touchPointStates() -> Qt.TouchPointState {
        Qt.TouchPointState(rawValue: QTouchEvent_touchPointStates(ptr))
    }

    public func target() -> QObject? {
        guard let qobj = QTouchEvent_target(ptr) else { return nil }
        if let raw = QObject_getSwiftObject(qobj) {
            return Unmanaged<QObject>.fromOpaque(raw).takeUnretainedValue()
        }
        return QObject.init(ptr: ptr)
    }
    
    public func window() -> QWindow? {
        guard let qobj = QTouchEvent_window(ptr) else { return nil }
        if let raw = QObject_getSwiftObject(qobj) {
            return Unmanaged<QWindow>.fromOpaque(raw).takeUnretainedValue()
        }
        return QWindow.init(ptr: ptr)
    }
    
    public func device() -> QTouchDevice {
        QTouchDevice.init(ptr: QTouchEvent_device(ptr))
    }
}
