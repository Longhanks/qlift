//
//  qlift-QScrollBar.cpp
//  
//
//  Created by Dmitriy Borovikov on 18.11.2021.
//

#include <QScrollBar>

#include "qlift-QScrollBar.h"

[[maybe_unused]] void *QScrollBar_new(void *parent) {
    return static_cast<void *>(new QScrollBar{static_cast<QWidget *>(parent)});
}
