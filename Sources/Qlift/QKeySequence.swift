//
//  QKeySequence.swift
//  
//
//  Created by Dmitriy Borovikov on 26.11.2021.
//

import CQlift

public class QKeySequence {
    public enum StandardKey: Int32 {
        case AddTab = 19
        case Back = 13
        case Backspace = 69
        case Bold = 27
        case Close = 4
        case Copy = 9
        case Cut = 8
        case Delete = 7
        case DeleteEndOfLine = 60
        case DeleteEndOfWord = 59
        case DeleteStartOfWord = 58
        case DeleteCompleteLine = 68
        case Find = 22
        case FindNext = 23
        case FindPrevious = 24
        case Forward = 14
        case HelpContents = 1
        case InsertLineSeparator = 62
        case InsertParagraphSeparator = 61
        case Italic = 28
        case MoveToEndOfBlock = 41
        case MoveToEndOfDocument = 43
        case MoveToEndOfLine = 39
        case MoveToNextChar = 30
        case MoveToNextLine = 34
        case MoveToNextPage = 36
        case MoveToNextWord = 32
        case MoveToPreviousChar = 31
        case MoveToPreviousLine = 35
        case MoveToPreviousPage = 37
        case MoveToPreviousWord = 33
        case MoveToStartOfBlock = 40
        case MoveToStartOfDocument = 42
        case MoveToStartOfLine = 38
        case New = 6
        case NextChild = 20
        case Open = 3
        case Paste = 10
        case Preferences = 64
        case PreviousChild = 21
        case Print = 18
        case Quit = 65
        case Redo = 12
        case Refresh = 15
        case Replace = 25
        case SaveAs = 63
        case Save = 5
        case SelectAll = 26
        case Deselect = 67
        case SelectEndOfBlock = 55
        case SelectEndOfDocument = 57
        case SelectEndOfLine = 53
        case SelectNextChar = 44
        case SelectNextLine = 48
        case SelectNextPage = 50
        case SelectNextWord = 46
        case SelectPreviousChar = 45
        case SelectPreviousLine = 49
        case SelectPreviousPage = 51
        case SelectPreviousWord = 47
        case SelectStartOfBlock = 54
        case SelectStartOfDocument = 56
        case SelectStartOfLine = 52
        case Underline = 29
        case Undo = 11
        case UnknownKey = 0
        case WhatsThis = 2
        case ZoomIn = 16
        case ZoomOut = 17
        case FullScreen = 66
        case Cancel = 70
    }
}
