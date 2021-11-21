#include <QLineEdit>
#include <wobjectimpl.h>
#include "qlift-QLineEdit.h"

/*
void QLineEdit_textEditedEvent_Override(void *lineEdit, void *context, void (*mousePressEvent_Functor)(void*, void*));
*/

[[maybe_unused]] void* QLineEdit_new(const char *contents, void *parent) {
    return static_cast<void*>(new QliftLineEdit { contents, static_cast<QWidget*>(parent) });
}

[[maybe_unused]] void QLineEdit_setPlaceholderText(void *lineEdit, const char *text) {
    static_cast<QLineEdit*>(lineEdit)->setPlaceholderText(text);
}

[[maybe_unused]] void QLineEdit_setText(void *lineEdit, const char *text) {
    static_cast<QLineEdit*>(lineEdit)->setText(text);
}

[[maybe_unused]] CQString QLineEdit_text(void *lineEdit) {
    auto text = static_cast<QLineEdit*>(lineEdit)->text();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] CQString QLineEdit_placeholderText(void *lineEdit) {
    auto text = static_cast<QLineEdit*>(lineEdit)->placeholderText();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] CQString QLineEdit_selectedText(void *lineEdit) {
    auto text = static_cast<QLineEdit*>(lineEdit)->selectedText();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] int QLineEdit_alignment(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->alignment();
}

[[maybe_unused]] void QLineEdit_setAlignment(void *lineEdit, int flag) {
    static_cast<QLineEdit*>(lineEdit)->setAlignment(static_cast<Qt::Alignment>(flag));
}

[[maybe_unused]] int QLineEdit_echoMode(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->echoMode();
}

[[maybe_unused]] void QLineEdit_setEchoMode(void *lineEdit, int mode) {
    static_cast<QLineEdit*>(lineEdit)->setEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

[[maybe_unused]] void QLineEdit_backspace(void *lineEdit) {
    static_cast<QLineEdit*>(lineEdit)->backspace();
}
[[maybe_unused]] void QLineEdit_cursorBackward(void *lineEdit, bool mark, int steps) {
    static_cast<QLineEdit*>(lineEdit)->cursorBackward(mark, steps);
}
[[maybe_unused]] void QLineEdit_cursorForward(void *lineEdit, bool mark, int steps) {
    static_cast<QLineEdit*>(lineEdit)->cursorForward(mark, steps);
}
[[maybe_unused]] void QLineEdit_cursorWordBackward(void *lineEdit, bool mark) {
    static_cast<QLineEdit*>(lineEdit)->cursorWordBackward(mark);
}
[[maybe_unused]] void QLineEdit_cursorWordForward(void *lineEdit, bool mark) {
    static_cast<QLineEdit*>(lineEdit)->cursorWordForward(mark);
}
[[maybe_unused]] void QLineEdit_del(void *lineEdit) {
    static_cast<QLineEdit*>(lineEdit)->del();
}
[[maybe_unused]] void QLineEdit_deselect(void *lineEdit) {
    static_cast<QLineEdit*>(lineEdit)->deselect();
}
[[maybe_unused]] void QLineEdit_end(void *lineEdit, bool mark) {
    static_cast<QLineEdit*>(lineEdit)->end(mark);
}
[[maybe_unused]] void QLineEdit_home(void *lineEdit, bool mark) {
    static_cast<QLineEdit*>(lineEdit)->home(mark);
}
[[maybe_unused]] void QLineEdit_insert(void *lineEdit, const char *newText) {
    static_cast<QLineEdit*>(lineEdit)->insert(newText);
}
[[maybe_unused]] void QLineEdit_setClearButtonEnabled(void *lineEdit, bool enable) {
    static_cast<QLineEdit*>(lineEdit)->setClearButtonEnabled(enable);
}
[[maybe_unused]] void QLineEdit_setCursorPosition(void *lineEdit, int position) {
    static_cast<QLineEdit*>(lineEdit)->setCursorPosition(position);
}
[[maybe_unused]] void QLineEdit_setDragEnabled(void *lineEdit, bool b) {
    static_cast<QLineEdit*>(lineEdit)->setDragEnabled(b);
}
[[maybe_unused]] void QLineEdit_setFrame(void *lineEdit, bool frame) {
    static_cast<QLineEdit*>(lineEdit)->setFrame(frame);
}
[[maybe_unused]] void QLineEdit_setInputMask(void *lineEdit, const char *inputMask) {
    static_cast<QLineEdit*>(lineEdit)->setInputMask(inputMask);
}
[[maybe_unused]] void QLineEdit_setMaxLength(void *lineEdit, int len) {
    static_cast<QLineEdit*>(lineEdit)->setMaxLength(len);
}
[[maybe_unused]] void QLineEdit_setModified(void *lineEdit, bool modified) {
    static_cast<QLineEdit*>(lineEdit)->setModified(modified);
}
[[maybe_unused]] void QLineEdit_setReadOnly(void *lineEdit, bool readOnly) {
    static_cast<QLineEdit*>(lineEdit)->setReadOnly(readOnly);
}
[[maybe_unused]] void QLineEdit_setSelection(void *lineEdit, int start, int length) {
    static_cast<QLineEdit*>(lineEdit)->setSelection(start, length);
}
[[maybe_unused]] void QLineEdit_setTextMargins(void *lineEdit, int left, int top, int right, int bottom) {
    static_cast<QLineEdit*>(lineEdit)->setTextMargins(left, top, right, bottom);
}
[[maybe_unused]] void QLineEdit_clear(void *lineEdit) {
    static_cast<QLineEdit*>(lineEdit)->clear();
}
[[maybe_unused]] void QLineEdit_selectAll(void *lineEdit) {
    static_cast<QLineEdit*>(lineEdit)->selectAll();
}

[[maybe_unused]] CQString QLineEdit_displayText(void *lineEdit) {
    auto text = static_cast<QLineEdit*>(lineEdit)->displayText();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] CQString QLineEdit_inputMask(void *lineEdit) {
    auto text = static_cast<QLineEdit*>(lineEdit)->inputMask();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] int QLineEdit_cursorPosition(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->cursorPosition();
}
[[maybe_unused]] int QLineEdit_cursorPositionAt(void *lineEdit, const void *pos) {
    return static_cast<QLineEdit*>(lineEdit)->cursorPositionAt(*static_cast<const QPoint *>(pos));
}
[[maybe_unused]] bool QLineEdit_dragEnabled(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->dragEnabled();
}
[[maybe_unused]] bool QLineEdit_hasAcceptableInput(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->hasAcceptableInput();
}
[[maybe_unused]] bool QLineEdit_hasFrame(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->hasFrame();
}
[[maybe_unused]] bool QLineEdit_hasSelectedText(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->hasSelectedText();
}
[[maybe_unused]] bool QLineEdit_isClearButtonEnabled(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->isClearButtonEnabled();
}
[[maybe_unused]] bool QLineEdit_isModified(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->isModified();
}
[[maybe_unused]] bool QLineEdit_isReadOnly(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->isReadOnly();
}
[[maybe_unused]] bool QLineEdit_isRedoAvailable(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->isRedoAvailable();
}
[[maybe_unused]] bool QLineEdit_isUndoAvailable(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->isUndoAvailable();
}
[[maybe_unused]] int QLineEdit_maxLength(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->maxLength();
}
[[maybe_unused]] int QLineEdit_selectionEnd(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->selectionEnd();
}
[[maybe_unused]] int QLineEdit_selectionLength(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->selectionLength();
}
[[maybe_unused]] int QLineEdit_selectionStart(void *lineEdit) {
    return static_cast<QLineEdit*>(lineEdit)->selectionStart();
}
[[maybe_unused]] void *QLineEdit_textMargins(void *lineEdit) {
    QMargins m = static_cast<QLineEdit*>(lineEdit)->textMargins();
    return new QMargins(m.left(), m.top(), m.right(), m.bottom());
}

[[maybe_unused]] void *QLineEdit_addAction(void *lineEdit, const void *icon, int position) {
    return static_cast<QLineEdit*>(lineEdit)->addAction(*static_cast<const QIcon *>(icon),
                                                        static_cast<QLineEdit::ActionPosition>(position));
}

[[maybe_unused]] void QLiftLineEdit_swiftHookCleanup(void *lineEdit) {
    if (lineEdit != nullptr)
        static_cast<QliftLineEdit*>(lineEdit)->swiftHookCleanup();
}

[[maybe_unused]] void QLineEdit_textChanged_connect(void *lineEdit,
                                                    void *receiver,
                                                    void *context,
                                                    void (*slot_ptr)(void*, CQString)) {
    QObject::connect(
        static_cast<QLineEdit*>(lineEdit),
        &QLineEdit::textChanged,
        static_cast<QObject*>(receiver),
        [context, slot_ptr](const QString &text) {
            (*slot_ptr)(context, CQString { text.utf16(), text.size() });
        }
    );
}

[[maybe_unused]] void QLineEdit_textEdited_connect(void *lineEdit,
                                                   void *receiver,
                                                   void *context,
                                                   void (*slot_ptr)(void*, CQString)) {
    QObject::connect(
                     static_cast<QLineEdit*>(lineEdit),
                     &QLineEdit::textEdited,
                     static_cast<QObject*>(receiver),
                     [context, slot_ptr](const QString &text) {
                         (*slot_ptr)(context, CQString { text.utf16(), text.size() });
                     }
    );
}

[[maybe_unused]] void QLineEdit_returnPressed_connect(void *lineEdit,
                                                    void *receiver,
                                                    void *context,
                                                    void (*slot_ptr)(void*)) {
    QObject::connect(
                     static_cast<QLineEdit*>(lineEdit),
                     &QLineEdit::returnPressed,
                     static_cast<QObject*>(receiver),
                     [context, slot_ptr]() {
                         (*slot_ptr)(context);
                     }
    );
}

[[maybe_unused]] void QLineEdit_editingFinished_connect(void *lineEdit,
                                                        void *receiver,
                                                        void *context,
                                                        void (*slot_ptr)(void*)) {
    QObject::connect(
                     static_cast<QLineEdit*>(lineEdit),
                     &QLineEdit::editingFinished,
                     static_cast<QObject*>(receiver),
                     [context, slot_ptr]() {
                         (*slot_ptr)(context);
                     }
    );
}

[[maybe_unused]] void QLineEdit_inputRejected_connect(void *lineEdit,
                                                        void *receiver,
                                                        void *context,
                                                        void (*slot_ptr)(void*)) {
    QObject::connect(
                     static_cast<QLineEdit*>(lineEdit),
                     &QLineEdit::inputRejected,
                     static_cast<QObject*>(receiver),
                     [context, slot_ptr]() {
                         (*slot_ptr)(context);
                     }
    );
}

W_OBJECT_IMPL(QliftLineEdit)

QliftLineEdit::~QliftLineEdit() {
}
