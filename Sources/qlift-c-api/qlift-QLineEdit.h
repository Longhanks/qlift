#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void* QLineEdit_new(const char *contents, void *parent);
LIBRARY_API void QLineEdit_setPlaceholderText(void *lineEdit, const char *text);
LIBRARY_API void QLineEdit_setText(void *lineEdit, const char *text);
LIBRARY_API const unsigned short* QLineEdit_text(void *lineEdit, int *len);
LIBRARY_API const unsigned short* QLineEdit_placeholderText(void *lineEdit, int *len);
LIBRARY_API const unsigned short* QLineEdit_selectedText(void *lineEdit, int *len);
LIBRARY_API void QLineEdit_textChanged_connect(void *lineEdit, void *receiver, void *context, void (*slot_ptr)(void*));

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
        void (*mousePressEvent_Functor)(void*, void*) = nullptr;
        void *context = nullptr;
};
#endif
