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

    public enum WidgetAttribute: Int32 {
        case WA_Disabled = 0
        case WA_UnderMouse = 1
        case WA_MouseTracking = 2
        case WA_ContentsPropagated = 3
        case WA_OpaquePaintEvent = 4
        case WA_StaticContents = 5
        case WA_LaidOut = 7
        case WA_PaintOnScreen = 8
        case WA_NoSystemBackground = 9
        case WA_UpdatesDisabled = 10
        case WA_Mapped = 11
        case WA_MacNoClickThrough = 12
        case WA_InputMethodEnabled = 14
        case WA_WState_Visible = 15
        case WA_WState_Hidden = 16

        case WA_ForceDisabled = 32
        case WA_KeyCompression = 33
        case WA_PendingMoveEvent = 34
        case WA_PendingResizeEvent = 35
        case WA_SetPalette = 36
        case WA_SetFont = 37
        case WA_SetCursor = 38
        case WA_NoChildEventsFromChildren = 39
        case WA_WindowModified = 41
        case WA_Resized = 42
        case WA_Moved = 43
        case WA_PendingUpdate = 44
        case WA_InvalidSize = 45
        case WA_MacMetalStyle = 46
        case WA_CustomWhatsThis = 47
        case WA_LayoutOnEntireRect = 48
        case WA_OutsideWSRange = 49
        case WA_GrabbedShortcut = 50
        case WA_TransparentForMouseEvents = 51
        case WA_PaintUnclipped = 52
        case WA_SetWindowIcon = 53
        case WA_NoMouseReplay = 54
        case WA_DeleteOnClose = 55
        case WA_RightToLeft = 56
        case WA_SetLayoutDirection = 57
        case WA_NoChildEventsForParent = 58
        case WA_ForceUpdatesDisabled = 59

        case WA_WState_Created = 60
        case WA_WState_CompressKeys = 61
        case WA_WState_InPaintEvent = 62
        case WA_WState_Reparented = 63
        case WA_WState_ConfigPending = 64
        case WA_WState_Polished = 66
        case WA_WState_DND = 67
        case WA_WState_OwnSizePolicy = 68
        case WA_WState_ExplicitShowHide = 69

        case WA_ShowModal = 70
        case WA_MouseNoMask = 71
        case WA_GroupLeader = 72
        case WA_NoMousePropagation = 73
        case WA_Hover = 74
        case WA_InputMethodTransparent = 75
        case WA_QuitOnClose = 76

        case WA_KeyboardFocusChange = 77

        case WA_AcceptDrops = 78
        case WA_DropSiteRegistered = 79
        case WA_WindowPropagation = 80

        case WA_NoX11EventCompression = 81
        case WA_TintedBackground = 82
        case WA_X11OpenGLOverlay = 83
        case WA_AlwaysShowToolTips = 84
        case WA_MacOpaqueSizeGrip = 85
        case WA_SetStyle = 86

        case WA_SetLocale = 87
        case WA_MacShowFocusRect = 88

        case WA_MacNormalSize = 89
        case WA_MacSmallSize = 90
        case WA_MacMiniSize = 91

        case WA_LayoutUsesWidgetRect = 92
        case WA_StyledBackground = 93
        case WA_MSWindowsUseDirect3D = 94
        case WA_CanHostQMdiSubWindowTitleBar = 95

        case WA_MacAlwaysShowToolWindow = 96

        case WA_StyleSheet = 97

        case WA_ShowWithoutActivating = 98

        case WA_X11BypassTransientForHint = 99

        case WA_NativeWindow = 100
        case WA_DontCreateNativeAncestors = 101

        case WA_MacVariableSize = 102

        case WA_DontShowOnScreen = 103

        case WA_X11NetWmWindowTypeDesktop = 104
        case WA_X11NetWmWindowTypeDock = 105
        case WA_X11NetWmWindowTypeToolBar = 106
        case WA_X11NetWmWindowTypeMenu = 107
        case WA_X11NetWmWindowTypeUtility = 108
        case WA_X11NetWmWindowTypeSplash = 109
        case WA_X11NetWmWindowTypeDialog = 110
        case WA_X11NetWmWindowTypeDropDownMenu = 111
        case WA_X11NetWmWindowTypePopupMenu = 112
        case WA_X11NetWmWindowTypeToolTip = 113
        case WA_X11NetWmWindowTypeNotification = 114
        case WA_X11NetWmWindowTypeCombo = 115
        case WA_X11NetWmWindowTypeDND = 116
        case WA_MacFrameworkScaled = 117
        case WA_SetWindowModality = 118
        case WA_WState_WindowOpacitySet = 119
        case WA_TranslucentBackground = 120

        case WA_AcceptTouchEvents = 121
        case WA_WState_AcceptedTouchBeginEvent = 122
        case WA_TouchPadAcceptSingleTouchEvents = 123

        case WA_X11DoNotAcceptFocus = 126
        case WA_MacNoShadow = 127

        case WA_AlwaysStackOnTop = 128

        case WA_TabletTracking = 129

        case WA_ContentsMarginsRespectsSafeArea = 130

        case WA_StyleSheetTarget = 131
    }
}
