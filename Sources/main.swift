#if os(Linux)
import Glibc
#else
import Darwin
#endif

import CQlift


var argc = CommandLine.argc
let app = QApplication_ctor(&argc, CommandLine.unsafeArgv)
let mw = QMainWindow_ctor_parent_default_flags_default();
let label = QLabel_ctor_text_arg1_parent_arg2_flags_default("Hello, world!", mw)
QLabel_setAlignment(label, 132)
QMainWindow_setCentralWidget(mw, label)
QMainWindow_show(mw)
let returnValue = QApplication_exec(app)
exit(returnValue)

