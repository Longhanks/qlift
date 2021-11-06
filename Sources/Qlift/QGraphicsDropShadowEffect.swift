//
//  QGraphicsDropShadowEffect.swift
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

import CQlift

public class QGraphicsDropShadowEffect: QGraphicsEffect {

    deinit {
        checkDeleteQtObj()
    }

    override public init(parent: QObject? = nil) {
        super.init(ptr: QGraphicsDropShadowEffect_new(parent?.ptr), parent: parent)
    }


    public var blurRadius: Double {
        get { QGraphicsDropShadowEffect_blurRadius(ptr) }
        set { QGraphicsDropShadowEffect_setBlurRadius(ptr, newValue) }
    }

    public var color: QColor = QColor() {
        didSet { QGraphicsDropShadowEffect_setColor(ptr, color.ptr) }
    }

    public var offset: QPointF {
        get {
            let cpointf = QGraphicsDropShadowEffect_offset(ptr)
            return QPointF(x: cpointf.x, y: cpointf.y)
        }
        set { QGraphicsDropShadowEffect_setOffset(ptr, newValue.x, newValue.y) }
    }

    public var xOffset: Double {
        get { QGraphicsDropShadowEffect_xOffset(ptr) }
        set { QGraphicsDropShadowEffect_setXOffset(ptr, newValue) }
    }

    public var yOffset: Double {
        get { QGraphicsDropShadowEffect_yOffset(ptr) }
        set { QGraphicsDropShadowEffect_setYOffset(ptr, newValue) }
    }

    public func setOffset(d: Double) {
        QGraphicsDropShadowEffect_setOffsetD(ptr, d)
    }
}
