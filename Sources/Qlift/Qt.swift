public struct Qt {
    public struct Alignment: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let AlignLeft = Alignment(rawValue: 1)
        public static let AlignRight = Alignment(rawValue: 2)
        public static let AlignHCenter = Alignment(rawValue: 4)
        public static let AlignJustify = Alignment(rawValue: 8)
        public static let AlignAbsolute = Alignment(rawValue: 16)
        public static let AlignTop = Alignment(rawValue: 32)
        public static let AlignBottom = Alignment(rawValue: 64)
        public static let AlignVCenter = Alignment(rawValue: 128)
        public static let AlignBaseline = Alignment(rawValue: 256)
        public static let AlignCenter: Alignment = [.AlignVCenter, .AlignHCenter]
        public static let AlignHorizontal_Mask: Alignment  = [.AlignLeft, .AlignRight, .AlignHCenter, .AlignJustify, .AlignAbsolute]
        public static let AlignVertical_Mask: Alignment = [.AlignTop, .AlignBottom, .AlignVCenter, .AlignBaseline]
    }

    public struct Orientation: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let Horizontal = Orientation(rawValue: 1)
        public static let Vertical = Orientation(rawValue: 2)
    }

    public struct WindowFlags: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let Widget = WindowFlags(rawValue: 0)
        public static let Window = WindowFlags(rawValue: 1)
        public static let Dialog = WindowFlags(rawValue: 3)
        public static let Sheet = WindowFlags(rawValue: 5)
        public static let Drawer = WindowFlags(rawValue: 7)
        public static let Popup = WindowFlags(rawValue: 9)
        public static let Tool = WindowFlags(rawValue: 11)
        public static let ToolTip = WindowFlags(rawValue: 13)
        public static let SplashScreen = WindowFlags(rawValue: 15)
        public static let Desktop = WindowFlags(rawValue: 17)
        public static let SubWindow = WindowFlags(rawValue: 18)
        public static let ForeignWindow = WindowFlags(rawValue: 33)
        public static let CoverWindow = WindowFlags(rawValue: 65)

        public static let WindowType_Mask = WindowFlags(rawValue: 255)
        public static let MSWindowsFixedSizeDialogHint = WindowFlags(rawValue: 256)
        public static let MSWindowsOwnDC = WindowFlags(rawValue: 512)
        public static let BypassWindowManagerHint = WindowFlags(rawValue: 1024)
        public static let X11BypassWindowManagerHint = WindowFlags(rawValue: 1024)
        public static let FramelessWindowHint = WindowFlags(rawValue: 2048)
        public static let WindowTitleHint = WindowFlags(rawValue: 4096)
        public static let WindowSystemMenuHint = WindowFlags(rawValue: 8192)
        public static let WindowMinimizeButtonHint = WindowFlags(rawValue: 16384)
        public static let WindowMaximizeButtonHint = WindowFlags(rawValue: 32768)
        public static let WindowMinMaxButtonsHint = WindowFlags(rawValue: 49152)
        public static let WindowContextHelpButtonHint = WindowFlags(rawValue: 65536)
        public static let WindowShadeButtonHint = WindowFlags(rawValue: 131072)
        public static let WindowStaysOnTopHint = WindowFlags(rawValue: 262144)
        public static let WindowTransparentForInput = WindowFlags(rawValue: 524288)
        public static let WindowOverridesSystemGestures = WindowFlags(rawValue: 1048576)
        public static let WindowDoesNotAcceptFocus = WindowFlags(rawValue: 2097152)
        public static let MaximizeUsingFullscreenGeometryHint = WindowFlags(rawValue: 4194304)

        public static let CustomizeWindowHint = WindowFlags(rawValue: 33554432)
        public static let WindowStaysOnBottomHint = WindowFlags(rawValue: 67108864)
        public static let WindowCloseButtonHint = WindowFlags(rawValue: 134217728)
        public static let MacWindowToolBarButtonHint = WindowFlags(rawValue: 268435456)
        public static let BypassGraphicsProxyWidget = WindowFlags(rawValue: 536870912)
        public static let NoDropShadowWindowHint = WindowFlags(rawValue: 1073741824)
        public static let WindowFullscreenButtonHint = WindowFlags(rawValue: -2147483648)
    }

    public struct TimerType: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let PreciseTimer = TimerType(rawValue: 0)
        public static let CoarseTimer = TimerType(rawValue: 1)
        public static let VeryCoarseTimer = TimerType(rawValue: 2)
    }
}

