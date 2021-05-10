//
//  QBrush.swift
//  
//
//  Created by Dmitriy Borovikov on 10.05.2021.
//

import CQlift

public class QBrush {

    public enum BrushStyle: Int32 {
        case noBrush = 0                    //    No brush pattern.
        case solidPattern = 1               //    Uniform color.
        case dense1Pattern = 2              //    Extremely dense brush pattern.
        case dense2Pattern = 3              //    Very dense brush pattern.
        case dense3Pattern = 4              //    Somewhat dense brush pattern.
        case dense4Pattern = 5              //    Half dense brush pattern.
        case dense5Pattern = 6              //    Somewhat sparse brush pattern.
        case dense6Pattern = 7              //    Very sparse brush pattern.
        case dense7Pattern = 8              //    Extremely sparse brush pattern.
        case horPattern = 9                 //    Horizontal lines.
        case verPattern = 10                //    Vertical lines.
        case crossPattern = 11              //    Crossing horizontal and vertical lines.
        case bDiagPattern = 12              //    Backward diagonal lines.
        case fDiagPattern = 13              //    Forward diagonal lines.
        case diagCrossPattern = 14          //    Crossing diagonal lines.
        case linearGradientPattern = 15     //    Linear gradient (set using a dedicated QBrush constructor).
        case radialGradientPattern = 16     //    Radial gradient (set using a dedicated QBrush constructor).
        case conicalGradientPattern = 17    //    Conical gradient (set using a dedicated QBrush constructor).
        case texturePattern = 24            //    Custom pattern (see QBrush::setTexture()).
    }

    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QBrush_new()
    }

    deinit {
        if self.ptr != nil {
            QBrush_delete(self.ptr)
            self.ptr = nil
        }
    }

    public init(brush: QBrush) {
        self.ptr = QBrush_new_brush(brush.ptr)
    }

    public init(pixmap: QPixmap) {
        self.ptr = QBrush_new_pixmap(pixmap.ptr)
    }

    public init(color: QColor, pixmap: QPixmap) {
        self.ptr = QBrush_new_color_pixmap(color.ptr, pixmap.ptr)
    }

    public init(color: QColor, style: BrushStyle = .solidPattern) {
        self.ptr = QBrush_new_color_style(color.ptr, style.rawValue)
    }

    public init(style: BrushStyle) {
        self.ptr = QBrush_new_style(style.rawValue)
    }
}
