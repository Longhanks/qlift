//
//  QPalette.swift
//  
//
//  Created by Dmitriy Borovikov on 10.05.2021.
//

import CQlift

public class QPalette {

    public enum ColorRole: Int32 {
        case windowText = 0
        case button
        case light
        case midlight
        case dark
        case mid
        case text
        case brightText
        case buttonText
        case base
        case window
        case shadow
        case highlight
        case highlightedText
        case link
        case linkVisited
        case alternateBase
        case noRole
        case toolTipBase
        case toolTipText
        case placeholderText = 20

        public var backgorund: ColorRole { .window }
        public var foreground: ColorRole { .windowText }
    }

    public enum ColorGroup: Int32 {
        case active = 0
        case disabled
        case inactive
        case nColorGroups
        case current
        case all

        public var normal: ColorGroup { .active }
    }

    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QPalette_new()
    }

    deinit {
        if self.ptr != nil {
            QPalette_delete(self.ptr)
            self.ptr = nil
        }
    }

    public init(button: QColor) {
        self.ptr = QPalette_new_butt(button.ptr)
    }

    public init(button: QColor, window: QColor) {
        self.ptr = QPalette_new_butt_win(button.ptr, window.ptr)
    }

    public init(windowText: QBrush,
                button: QBrush,
                light: QBrush,
                dark: QBrush,
                mid: QBrush,
                text: QBrush,
                bright_text: QBrush,
                base: QBrush,
                window: QBrush) {
        self.ptr = QPalette_new_brush(windowText.ptr,
                                      button.ptr,
                                      light.ptr,
                                      dark.ptr,
                                      mid.ptr,
                                      text.ptr,
                                      bright_text.ptr,
                                      base.ptr,
                                      window.ptr)
    }

    public init(windowText: QColor,
                window: QColor,
                light: QColor,
                dark: QColor,
                mid: QColor,
                text: QColor,
                base: QColor) {
        QPalette_new_color(windowText.ptr,
                           window.ptr,
                           light.ptr,
                           dark.ptr,
                           mid.ptr,
                           text.ptr,
                           base.ptr)
    }

    public init(pallete: QPalette) {
        QPalette_new_palette(pallete.ptr)
    }

    public func setColor(colorGroup: ColorGroup = .all, colorRole: ColorRole, color: QColor) {
        QPalette_setColor(ptr, colorGroup.rawValue, colorRole.rawValue, color.ptr)
    }

    public func setBursh(colorGroup: ColorGroup = .all, colorRole: ColorRole, brush: QBrush) {
        QPalette_setBrush(ptr, colorGroup.rawValue, colorRole.rawValue, brush.ptr)
    }
}
