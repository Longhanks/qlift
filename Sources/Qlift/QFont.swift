//
//  QFont.swift
//  
//
//  Created by Dmitriy Borovikov on 21.01.2022.
//

import CQlift

public class QFont {
    public var ptr: UnsafeMutableRawPointer!

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    public init() {
        self.ptr = QFont_new2();
    }

    public init(family: String, pointSize: Int32 = -1, weight: Int32 = -1, italic: Bool = false) {
        ptr = QFont_new1(family, pointSize, weight, italic)
    }

    public init(family: String, pointSize: Int32 = -1, weight: Weight? = nil , italic: Bool = false) {
        ptr = QFont_new1(family, pointSize, weight?.rawValue ?? -1, italic)
    }

    public init(font: QFont) {
        ptr = QFont_new(font.ptr)
    }
    
    deinit {
        QFont_delete(ptr)
    }
    
    // Mark: enum defs
    public enum StyleHint: Int32 {
        case Helvetica
        case Times
        case Courier
        case OldEnglish
        case System
        case AnyStyle
        case Cursive
        case Monospace
        case Fantasy
        
        static let SansSerif = Helvetica
        static let Serif = Times
        static let TypeWriter = Courier
        static let Decorative = OldEnglish
    }

    public struct StyleStrategy: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let PreferDefault       = StyleStrategy(rawValue: 0x0001)
        public static let PreferBitmap        = StyleStrategy(rawValue: 0x0002)
        public static let PreferDevice        = StyleStrategy(rawValue: 0x0004)
        public static let PreferOutline       = StyleStrategy(rawValue: 0x0008)
        public static let ForceOutline        = StyleStrategy(rawValue: 0x0010)
        public static let PreferMatch         = StyleStrategy(rawValue: 0x0020)
        public static let PreferQuality       = StyleStrategy(rawValue: 0x0040)
        public static let PreferAntialias     = StyleStrategy(rawValue: 0x0080)
        public static let NoAntialias         = StyleStrategy(rawValue: 0x0100)
        public static let NoSubpixelAntialias = StyleStrategy(rawValue: 0x0800)
        public static let PreferNoShaping     = StyleStrategy(rawValue: 0x1000)
        public static let NoFontMerging       = StyleStrategy(rawValue: 0x8000)
    }

    public enum HintingPreference: Int32 {
        case PreferDefaultHinting        = 0
        case PreferNoHinting             = 1
        case PreferVerticalHinting       = 2
        case PreferFullHinting           = 3
    }

    // Mapping OpenType weight value.
    public enum Weight: Int32 {
        case Thin      = 0   // 100
        case ExtraLight = 12 // 200
        case Light     = 25  // 300
        case Normal    = 50  // 400
        case Medium    = 57  // 500
        case DemiBold  = 63  // 600
        case Bold      = 75  // 700
        case ExtraBold = 81  // 800
        case Black     = 87  // 900
    }

    public enum Style: Int32 {
        case StyleNormal
        case StyleItalic
        case StyleOblique
    }

    public enum Stretch: Int32 {
        case AnyStretch     =   0
        case UltraCondensed =  50
        case ExtraCondensed =  62
        case Condensed      =  75
        case SemiCondensed  =  87
        case Unstretched    = 100
        case SemiExpanded   = 112
        case Expanded       = 125
        case ExtraExpanded  = 150
        case UltraExpanded  = 200
    }

    public enum Capitalization: Int32 {
        case MixedCase
        case AllUppercase
        case AllLowercase
        case SmallCaps
        case Capitalize
    }

    public enum SpacingType: Int32 {
        case PercentageSpacing
        case AbsoluteSpacing
    }
    
    public var family: String {
        get {
            let s = QFont_family(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QFont_setFamily(ptr, newValue)}
    }
    
    public var styleName: String {
        get {
            let s = QFont_styleName(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QFont_setStyleName(ptr, newValue)}
    }

    public var pointSize: Int32 {
        get { QFont_pointSize(ptr) }
        set { QFont_setPointSize(ptr, newValue) }
    }

    public var pointSizeF: Double {
        get { QFont_pointSizeF(ptr) }
        set { QFont_setPointSizeF(ptr, newValue) }
    }

    public var pixelSize: Int32 {
        get { QFont_pixelSize(ptr) }
        set { QFont_setPixelSize(ptr, newValue) }
    }

    public var weight: Int32 {
        get { QFont_weight(ptr) }
        set { QFont_setWeight(ptr, newValue) }
    }

    public var bold: Bool {
        get { QFont_bold(ptr) }
        set { QFont_setBold(ptr, newValue) }
    }

    public var italic: Bool {
        get { QFont_italic(ptr) }
        set { QFont_setItalic(ptr, newValue) }
    }
    
    public var underline: Bool {
        get { QFont_underline(ptr) }
        set { QFont_setUnderline(ptr, newValue)}
    }

    public var overline: Bool {
        get { QFont_overline(ptr) }
        set { QFont_setOverline(ptr, newValue) }
    }

    public var strikeOut: Bool {
        get { QFont_strikeOut(ptr) }
        set { QFont_setStrikeOut(ptr, newValue) }
    }
    
    public var kerning: Bool {
        get { QFont_kerning(ptr) }
        set { QFont_setKerning(ptr, newValue) }
    }

    public var fixedPitch: Bool {
        get { QFont_fixedPitch(ptr) }
        set { QFont_setFixedPitch(ptr, newValue) }
    }

    public var setStyle: Style {
        get { QFont.Style(rawValue: QFont_style(ptr))! }
        set { QFont_setStyle(ptr, newValue.rawValue) }
    }

    public var wordSpacing: Double {
        get { QFont_wordSpacing(ptr) }
        set { QFont_setWordSpacing(ptr, newValue) }
    }

    public var capitalization: Capitalization {
        get { .init(rawValue: QFont_capitalization(ptr))! }
        set { QFont_setCapitalization(ptr, newValue.rawValue) }
    }

    public var stretch: Int32 {
        get { QFont_stretch(ptr) }
        set { QFont_setStretch(ptr, newValue) }
    }

    public var hintingPreference: HintingPreference {
        get { .init(rawValue: QFont_hintingPreference(ptr))! }
        set { QFont_setHintingPreference(ptr, newValue.rawValue) }
    }

    public var styleStrategy: StyleStrategy {
        get { .init(rawValue: QFont_styleStrategy(ptr)) }
        set { QFont_setStyleStrategy(ptr, newValue.rawValue) }
    }

    public func styleHint() -> StyleHint {
        .init(rawValue: QFont_styleHint(ptr))!
    }

    public func setStyleHint(hint: StyleHint, strategy: StyleStrategy = .PreferDefault) {
        QFont_setStyleHint(ptr, hint.rawValue, strategy.rawValue)
    }

    public func letterSpacingType() -> SpacingType {
        .init(rawValue: QFont_letterSpacingType(ptr))!
    }

    public func setLetterSpacing(type: SpacingType, spacing: Double) {
        QFont_setLetterSpacing(ptr, type.rawValue, spacing)
    }

    public func toString() -> String {
        let s = QFont_toString(ptr)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }

    public func fromString(description: String) {
        QFont_fromString(ptr, description)
    }
}
