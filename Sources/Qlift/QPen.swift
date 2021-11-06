//
//  QPen.swift
//  
//
//  Created by Dmitriy Borovikov on 10.05.2021.
//

import CQlift

public class QPen {
    public enum PenStyle: Int32 { // pen style
        case NoPen = 0
        case SolidLine
        case DashLine
        case DotLine
        case DashDotLine
        case DashDotDotLine
        case CustomDashLine
    }

    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QPen_new()
    }

    deinit {
        if self.ptr != nil {
            QPen_delete(self.ptr)
            self.ptr = nil
        }
    }

    public var style = PenStyle.SolidLine {
        didSet {
            QPen_setStyle(ptr, style.rawValue)
        }
    }

    public var width: Int32 = 0 {
        didSet {
            QPen_setWidth(ptr, width)
        }
    }

    public var cosmetic = false {
        didSet {
            QPen_setCosmetic(ptr, cosmetic)
        }
    }

    public func setColor(_ color: QColor) {
        QPen_setColor(ptr, color.ptr)
    }

    public func setBrush(_ brush: QBrush) {
        QPen_setBrush(ptr, brush.ptr)
    }
}
