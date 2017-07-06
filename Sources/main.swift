#if os(Linux)
import Glibc
#else
import Darwin
#endif

import CQlift


var argc = CommandLine.argc
let app = QApplication_ctor(&argc, CommandLine.unsafeArgv)
let returnValue = QApplication_exec(app)
exit(returnValue)

