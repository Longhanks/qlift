#if os(Linux)
import Glibc
#else
import Darwin
#endif
import CQlift


func main() -> Int32 {
    let application = QApplication()
    let mainWindow = QMainWindow()
    let label = QLabel(text: "Hello, world!", parent: mainWindow)
    label.alignment = 132
    mainWindow.centralWidget = label
    mainWindow.show()
    return application.exec()
}

exit(main())

