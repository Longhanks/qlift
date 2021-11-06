//
//  QGraphicsEffect.swift
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

import CQlift

public class QGraphicsEffect: QObject {

    public var enabled: Bool {
        get { QGraphicsEffect_isEnabled(ptr) }
        set { QGraphicsEffect_setEnabled(ptr, newValue) }
    }

    public func update() {
        QGraphicsEffect_update(ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}
