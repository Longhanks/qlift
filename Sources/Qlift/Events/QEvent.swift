import CQlift


public class QEvent {
    var ptr: UnsafeMutableRawPointer!
    var needsDelete = false

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil && self.needsDelete {
            QEvent_delete(self.ptr)
        }
    }

    public func accept() {
        QEvent_accept(ptr)
    }

    public func ignore() {
        QEvent_ignore(ptr)
    }

    public func type() -> EventType {
        EventType(rawValue: QEvent_type(ptr)) ?? .None
    }

    public func spontaneous() -> Bool {
        QEvent_spontaneous(ptr)
    }

    public var accepted: Bool {
        get { QEvent_isAccepted(ptr) }
        set { QEvent_setAccepted(ptr, newValue) }
    }

    public enum EventType: Int32 {
        case None = 0
        case Timer = 1
        case MouseButtonPress = 2
        case MouseButtonRelease = 3
        case MouseButtonDblClick = 4
        case MouseMove = 5
        case KeyPress = 6
        case KeyRelease = 7
        case FocusIn = 8
        case FocusOut = 9
        case FocusAboutToChange = 23
        case Enter = 10
        case Leave = 11
        case Paint = 12
        case Move = 13
        case Resize = 14
        case Create = 15
        case Destroy = 16
        case Show = 17
        case Hide = 18
        case Close = 19
        case Quit = 20
        case ParentChange = 21
        case ParentAboutToChange = 131
        case ThreadChange = 22
        case WindowActivate = 24
        case WindowDeactivate = 25
        case ShowToParent = 26
        case HideToParent = 27
        case Wheel = 31
        case WindowTitleChange = 33
        case WindowIconChange = 34
        case ApplicationWindowIconChange = 35
        case ApplicationFontChange = 36
        case ApplicationLayoutDirectionChange = 37
        case ApplicationPaletteChange = 38
        case PaletteChange = 39
        case Clipboard = 40
        case Speech = 42
        case MetaCall =  43
        case SockAct = 50
        case WinEventAct = 132
        case DeferredDelete = 52
        case DragEnter = 60
        case DragMove = 61
        case DragLeave = 62
        case Drop = 63
        case DragResponse = 64
        case ChildAdded = 68
        case ChildPolished = 69
        case ChildRemoved = 71
        case ShowWindowRequest = 73
        case PolishRequest = 74
        case Polish = 75
        case LayoutRequest = 76
        case UpdateRequest = 77
        case UpdateLater = 78
        case EmbeddingControl = 79
        case ActivateControl = 80
        case DeactivateControl = 81
        case ContextMenu = 82
        case InputMethod = 83
        case TabletMove = 87
        case LocaleChange = 88
        case LanguageChange = 89
        case LayoutDirectionChange = 90
        case Style = 91
        case TabletPress = 92
        case TabletRelease = 93
        case OkRequest = 94
        case HelpRequest = 95
        case IconDrag = 96
        case FontChange = 97
        case EnabledChange = 98
        case ActivationChange = 99
        case StyleChange = 100
        case IconTextChange = 101
        case ModifiedChange = 102
        case MouseTrackingChange = 109
        case WindowBlocked = 103
        case WindowUnblocked = 104
        case WindowStateChange = 105
        case ReadOnlyChange = 106
        case ToolTip = 110
        case WhatsThis = 111
        case StatusTip = 112
        case ActionChanged = 113
        case ActionAdded = 114
        case ActionRemoved = 115
        case FileOpen = 116
        case Shortcut = 117
        case ShortcutOverride = 51
        case WhatsThisClicked = 118
        case ToolBarChange = 120
        case ApplicationActivate = 121
        case ApplicationDeactivate = 122
        case QueryWhatsThis = 123
        case EnterWhatsThisMode = 124
        case LeaveWhatsThisMode = 125
        case ZOrderChange = 126
        case HoverEnter = 127
        case HoverLeave = 128
        case HoverMove = 129
        case EnterEditFocus = 150
        case LeaveEditFocus = 151
        case AcceptDropsChange = 152
        case ZeroTimerEvent = 154
        case GraphicsSceneMouseMove = 155
        case GraphicsSceneMousePress = 156
        case GraphicsSceneMouseRelease = 157
        case GraphicsSceneMouseDoubleClick = 158
        case GraphicsSceneContextMenu = 159
        case GraphicsSceneHoverEnter = 160
        case GraphicsSceneHoverMove = 161
        case GraphicsSceneHoverLeave = 162
        case GraphicsSceneHelp = 163
        case GraphicsSceneDragEnter = 164
        case GraphicsSceneDragMove = 165
        case GraphicsSceneDragLeave = 166
        case GraphicsSceneDrop = 167
        case GraphicsSceneWheel = 168
        case KeyboardLayoutChange = 169
        case DynamicPropertyChange = 170
        case TabletEnterProximity = 171
        case TabletLeaveProximity = 172
        case NonClientAreaMouseMove = 173
        case NonClientAreaMouseButtonPress = 174
        case NonClientAreaMouseButtonRelease = 175
        case NonClientAreaMouseButtonDblClick = 176
        case MacSizeChange = 177
        case ContentsRectChange = 178
        case MacGLWindowChange = 179
        case FutureCallOut = 180
        case GraphicsSceneResize  = 181
        case GraphicsSceneMove  = 182
        case CursorChange = 183
        case ToolTipChange = 184
        case NetworkReplyUpdated = 185
        case GrabMouse = 186
        case UngrabMouse = 187
        case GrabKeyboard = 188
        case UngrabKeyboard = 189
        case MacGLClearDrawable = 191
        case StateMachineSignal = 192
        case StateMachineWrapped = 193
        case TouchBegin = 194
        case TouchUpdate = 195
        case TouchEnd = 196
        case NativeGesture = 197
        case RequestSoftwareInputPanel = 199
        case CloseSoftwareInputPanel = 200
        case WinIdChange = 203
        case Gesture = 198
        case GestureOverride = 202
        case ScrollPrepare = 204
        case Scroll = 205
        case Expose = 206
        case InputMethodQuery = 207
        case OrientationChange = 208
        case TouchCancel = 209
        case ThemeChange = 210
        case SockClose = 211
        case PlatformPanel = 212
        case StyleAnimationUpdate = 213
        case ApplicationStateChange = 214
        case WindowChangeInternal = 215
        case ScreenChangeInternal = 216
        case PlatformSurface = 217
        case Pointer = 218
        case TabletTrackingChange = 219

        static let ApplicationActivated = ApplicationActivate
        static let ApplicationDeactivated = ApplicationDeactivate
    }
}
