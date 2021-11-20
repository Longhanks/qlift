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

    public var style: PenStyle {
        get { .init(rawValue: QPen_style(ptr)) ?? .SolidLine }
        set { QPen_setStyle(ptr, newValue.rawValue) }
    }

    public var width: Int32 {
        get { QPen_width(ptr) }
        set { QPen_setWidth(ptr, newValue) }
    }

    public var cosmetic: Bool {
        get { QPen_isCosmetic(ptr) }
        set { QPen_setCosmetic(ptr, newValue) }
    }

    public func setColor(_ color: QColor) {
        QPen_setColor(ptr, color.ptr)
    }

    public func setBrush(_ brush: QBrush) {
        QPen_setBrush(ptr, brush.ptr)
    }
}
