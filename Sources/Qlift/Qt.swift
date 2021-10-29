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
        public static let AlignLeading = AlignLeft
        public static let AlignTrailing = AlignRight
        public static let AlignCenter: Alignment = [.AlignVCenter, .AlignHCenter]
        public static let AlignHorizontal_Mask: Alignment  = [.AlignLeft, .AlignRight, .AlignHCenter, .AlignJustify, .AlignAbsolute]
        public static let AlignVertical_Mask: Alignment = [.AlignTop, .AlignBottom, .AlignVCenter, .AlignBaseline]
    }

    public enum Orientation: Int32 {
        case Horizontal = 1
        case Vertical = 2
    }

    public struct WindowFlags: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let Widget: WindowFlags = []
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

        public static let PreciseTimer: TimerType = []
        public static let CoarseTimer = TimerType(rawValue: 1)
        public static let VeryCoarseTimer = TimerType(rawValue: 2)
    }

    public struct MouseButton: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let NoButton: MouseButton = []
        public static let LeftButton = MouseButton(rawValue: 1)
        public static let RightButton = MouseButton(rawValue: 2)
        public static let MiddleButton = MouseButton(rawValue: 4)
        // Incomplete!
    }

    public enum WindowModality: Int32 {
        case NonModal = 0
        case WindowModal
        case ApplicationModal
    }

    public enum ApplicationAttribute: Int32 {
        case AA_ImmediateWidgetCreation = 0
        case AA_MSWindowsUseDirect3DByDefault = 1
        case AA_DontShowIconsInMenus = 2
        case AA_NativeWindows = 3
        case AA_DontCreateNativeWidgetSiblings = 4
        case AA_PluginApplication = 5
        case AA_DontUseNativeMenuBar = 6
        case AA_MacDontSwapCtrlAndMeta = 7
        case AA_Use96Dpi = 8
        case AA_DisableNativeVirtualKeyboard = 9
        case AA_X11InitThreads = 10
        case AA_SynthesizeTouchForUnhandledMouseEvents = 11
        case AA_SynthesizeMouseForUnhandledTouchEvents = 12
        case AA_UseHighDpiPixmaps = 13
        case AA_ForceRasterWidgets = 14
        case AA_UseDesktopOpenGL = 15
        case AA_UseOpenGLES = 16
        case AA_UseSoftwareOpenGL = 17
        case AA_ShareOpenGLContexts = 18
        case AA_SetPalette = 19
        case AA_EnableHighDpiScaling = 20
        case AA_DisableHighDpiScaling = 21
        case AA_UseStyleSheetPropagationInWidgetStyles = 22
        case AA_DontUseNativeDialogs = 23
        case AA_SynthesizeMouseForUnhandledTabletEvents = 24
        case AA_CompressHighFrequencyEvents = 25
        case AA_DontCheckOpenGLContextThreadAffinity = 26
        case AA_DisableShaderDiskCache = 27
        case AA_DontShowShortcutsInContextMenus = 28
        case AA_CompressTabletEvents = 29
        case AA_DisableWindowContextHelpButton = 30
        case AA_DisableSessionManager = 31
    }

    public struct WindowStates: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }
        public static let WindowNoState: WindowStates = []
        public static let WindowMinimized = WindowStates(rawValue: 1)
        public static let WindowMaximized = WindowStates(rawValue: 2)
        public static let WindowFullScreen = WindowStates(rawValue: 4)
        public static let WindowActive = WindowStates(rawValue: 8)
    }

    public enum ScrollBarPolicy: Int32 {
        case ScrollBarAsNeeded = 0
        case ScrollBarAlwaysOff
        case ScrollBarAlwaysOn
    }

    public enum ScrollPhase: Int32 {
        case NoScrollPhase = 0
        case ScrollBegin
        case ScrollUpdate
        case ScrollEnd
        case ScrollMomentum
    }

    public enum AspectRatioMode: Int32 {
        case IgnoreAspectRatio = 0
        case KeepAspectRatio
        case KeepAspectRatioByExpanding
    }

    public enum TransformationMode: Int32 {
        case FastTransformation = 0
        case SmoothTransformation
    }

    public enum TextFormat: Int32 {
        case PlainText = 0
        case RichText
        case AutoText
        case MarkdownText
    }
}
