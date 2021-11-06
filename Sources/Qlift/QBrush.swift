//
//  QBrush.swift
//  
//
//  Created by Dmitriy Borovikov on 10.05.2021.
//

import CQlift

public class QBrush {

    public enum BrushStyle: Int32 {
        case NoBrush = 0                    //    No brush pattern.
        case SolidPattern = 1               //    Uniform color.
        case Dense1Pattern = 2              //    Extremely dense brush pattern.
        case Dense2Pattern = 3              //    Very dense brush pattern.
        case Dense3Pattern = 4              //    Somewhat dense brush pattern.
        case Dense4Pattern = 5              //    Half dense brush pattern.
        case Dense5Pattern = 6              //    Somewhat sparse brush pattern.
        case Dense6Pattern = 7              //    Very sparse brush pattern.
        case Dense7Pattern = 8              //    Extremely sparse brush pattern.
        case HorPattern = 9                 //    Horizontal lines.
        case VerPattern = 10                //    Vertical lines.
        case CrossPattern = 11              //    Crossing horizontal and vertical lines.
        case BDiagPattern = 12              //    Backward diagonal lines.
        case FDiagPattern = 13              //    Forward diagonal lines.
        case DiagCrossPattern = 14          //    Crossing diagonal lines.
        case LinearGradientPattern = 15     //    Linear gradient (set using a dedicated QBrush constructor).
        case RadialGradientPattern = 16     //    Radial gradient (set using a dedicated QBrush constructor).
        case ConicalGradientPattern = 17    //    Conical gradient (set using a dedicated QBrush constructor).
        case TexturePattern = 24            //    Custom pattern (see QBrush::setTexture()).
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

    public init(color: QColor, style: BrushStyle = .SolidPattern) {
        self.ptr = QBrush_new_color_style(color.ptr, style.rawValue)
    }

    public init(style: BrushStyle) {
        self.ptr = QBrush_new_style(style.rawValue)
    }
}
