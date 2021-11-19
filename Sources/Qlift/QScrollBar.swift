//
//  QScrollBar.swift
//  
//
//  Created by Dmitriy Borovikov on 19.11.2021.
//

import CQlift

open class QScrollBar: QAbstractSlider {

    public init(parent: QWidget? = nil) {
        super.init(ptr: QScrollBar_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}
