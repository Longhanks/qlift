#if os(Linux)
import Glibc
#else
import Darwin
#endif


func main() -> Int32 {
    let application = QApplication()
    let mainWindow = QMainWindow()
    let label = QLabel(text: "Hello, world!", parent: mainWindow)
    mainWindow.centralWidget = label
    mainWindow.show()
    return application.exec()
}

exit(main())

