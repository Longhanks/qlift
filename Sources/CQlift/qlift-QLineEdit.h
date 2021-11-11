#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

LIBRARY_API void* QLineEdit_new(const char *contents, void *parent);
LIBRARY_API void QLineEdit_setPlaceholderText(void *lineEdit, const char *text);
LIBRARY_API void QLineEdit_setText(void *lineEdit, const char *text);
LIBRARY_API CQString QLineEdit_text(void *lineEdit);
LIBRARY_API CQString QLineEdit_placeholderText(void *lineEdit);
LIBRARY_API CQString QLineEdit_selectedText(void *lineEdit);
LIBRARY_API int QLineEdit_alignment(void *lineEdit);
LIBRARY_API void QLineEdit_setAlignment(void *lineEdit, int flag);
LIBRARY_API int QLineEdit_echoMode(void *lineEdit);
LIBRARY_API void QLineEdit_setEchoMode(void *lineEdit, int mode);

LIBRARY_API void QLineEdit_backspace(void *lineEdit);
LIBRARY_API void QLineEdit_cursorBackward(void *lineEdit, bool mark, int steps);
LIBRARY_API void QLineEdit_cursorForward(void *lineEdit, bool mark, int steps);
LIBRARY_API void QLineEdit_cursorWordBackward(void *lineEdit, bool mark);
LIBRARY_API void QLineEdit_cursorWordForward(void *lineEdit, bool mark);
LIBRARY_API void QLineEdit_del(void *lineEdit);
LIBRARY_API void QLineEdit_deselect(void *lineEdit);
LIBRARY_API void QLineEdit_end(void *lineEdit, bool mark);
LIBRARY_API void QLineEdit_home(void *lineEdit, bool mark);
LIBRARY_API void QLineEdit_insert(void *lineEdit, const char *newText);
LIBRARY_API void QLineEdit_setClearButtonEnabled(void *lineEdit, bool enable);
LIBRARY_API void QLineEdit_setCursorPosition(void *lineEdit, int position);
LIBRARY_API void QLineEdit_setDragEnabled(void *lineEdit, bool b);
LIBRARY_API void QLineEdit_setFrame(void *lineEdit, bool frame);
LIBRARY_API void QLineEdit_setInputMask(void *lineEdit, const char *inputMask);
LIBRARY_API void QLineEdit_setMaxLength(void *lineEdit, int len);
LIBRARY_API void QLineEdit_setModified(void *lineEdit, bool modified);
LIBRARY_API void QLineEdit_setReadOnly(void *lineEdit, bool readOnly);
LIBRARY_API void QLineEdit_setSelection(void *lineEdit, int start, int length);
LIBRARY_API void QLineEdit_setTextMargins(void *lineEdit, int left, int top, int right, int bottom);
LIBRARY_API void QLineEdit_clear(void *lineEdit);
LIBRARY_API void QLineEdit_selectAll(void *lineEdit);
LIBRARY_API int QLineEdit_cursorPosition(void *lineEdit);
LIBRARY_API int QLineEdit_cursorPositionAt(void *lineEdit, const void *pos);
LIBRARY_API CQString QLineEdit_displayText(void *lineEdit);
LIBRARY_API bool QLineEdit_dragEnabled(void *lineEdit);
LIBRARY_API bool QLineEdit_hasAcceptableInput(void *lineEdit);
LIBRARY_API bool QLineEdit_hasFrame(void *lineEdit);
LIBRARY_API bool QLineEdit_hasSelectedText(void *lineEdit);
LIBRARY_API CQString QLineEdit_inputMask(void *lineEdit);
LIBRARY_API bool QLineEdit_isClearButtonEnabled(void *lineEdit);
LIBRARY_API bool QLineEdit_isModified(void *lineEdit);
LIBRARY_API bool QLineEdit_isReadOnly(void *lineEdit);
LIBRARY_API bool QLineEdit_isRedoAvailable(void *lineEdit);
LIBRARY_API bool QLineEdit_isUndoAvailable(void *lineEdit);
LIBRARY_API int QLineEdit_maxLength(void *lineEdit);
LIBRARY_API int QLineEdit_selectionEnd(void *lineEdit);
LIBRARY_API int QLineEdit_selectionLength(void *lineEdit);
LIBRARY_API int QLineEdit_selectionStart(void *lineEdit);
LIBRARY_API void *QLineEdit_textMargins(void *lineEdit);

#pragma clang assume_nonnull begin
LIBRARY_API void *QLineEdit_addAction(void *lineEdit, const void *icon, int position);

LIBRARY_API void QLineEdit_textChanged_connect(void *lineEdit,
                                               void *receiver,
                                               void *context,
                                               void (*slot_ptr)(void*, CQString));
LIBRARY_API void QLineEdit_textEdited_connect(void *lineEdit,
                                              void *receiver,
                                              void *context,
                                              void (*slot_ptr)(void*, CQString));
LIBRARY_API void QLineEdit_returnPressed_connect(void *lineEdit,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void*));
LIBRARY_API void QLineEdit_editingFinished_connect(void *lineEdit,
                                                   void *receiver,
                                                   void *context,
                                                   void (*slot_ptr)(void*));
LIBRARY_API void QLineEdit_inputRejected_connect(void *lineEdit,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void*));
#pragma clang assume_nonnull end

LIBRARY_API void QLiftLineEdit_swiftHookCleanup(void *lineEdit);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

class QliftLineEdit: public QLineEdit {
    W_OBJECT(QliftLineEdit)

public:
    using QLineEdit::QLineEdit;
    virtual ~QliftLineEdit();
    void (*m_mousePressEvent_Functor)(void*, void*) = nullptr;
    void *context = nullptr;
    void swiftHookCleanup() {
        m_mousePressEvent_Functor = nullptr;
    }

};
#endif
