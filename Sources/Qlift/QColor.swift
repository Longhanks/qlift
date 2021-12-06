//
//  QColor.swift
//  
//
//  Created by Dmitriy Borovikov on 10.05.2021.
//

import CQlift

public class QColor {
    enum NameFormat: Int32 {
        case hexRgb = 0     // #RRGGBB A "#" character followed by three two-digit hexadecimal numbers (i.e. #RRGGBB).
        case hexArgb = 1    // #AARRGGBB A "#" character followed by four two-digit hexadecimal numbers (i.e. #AARRGGBB).
    }

    enum Spec: Int32 {
        case rgb = 1
        case hsv = 2
        case cmyk = 3
        case hsl = 4
        case extendedRgb = 5
        case invalid = 0
   }
    
    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QColor_new()
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            QColor_delete(self.ptr)
            self.ptr = nil
        }
    }

    public init(color: QColor) {
        self.ptr = QColor_new_color(color.ptr)
    }

    public init(name: String) {
        self.ptr = QColor_new_name(name)
    }

    public init(r: Int, g: Int, b: Int, a: Int = 255) {
        self.ptr = QColor_new_rgba(Int32(r), Int32(g), Int32(b), Int32(a))
    }

    public func setNamed(name: String) {
        QColor_setNamedColor(self.ptr, name)
    }

    public func setRgb(r: Int, g: Int, b: Int, a: Int = 255) {
        QColor_setRgb(self.ptr, Int32(r), Int32(g), Int32(b), Int32(a))
    }

    public func setRgbF(r: Double, g: Double, b: Double, a: Double) {
        QColor_setRgbF(ptr, r, g, b, a)
    }

}
