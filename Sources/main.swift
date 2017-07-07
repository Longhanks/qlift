#if os(Linux)
import Glibc
#else
import Darwin
#endif


func main() -> Int32 {
    let application = QApplication()
    let mainWindow = QMainWindow()
    // let label = QLabel(text: "Hello, world!", parent: mainWindow)
    // label.alignment = 132
    let pushButton = QPushButton(text: "Push me!", parent: mainWindow)
    pushButton.connectClicked { checked in
        print("Button clicked, now is \(checked)")
    }
    mainWindow.centralWidget = pushButton
    mainWindow.show()
    return application.exec()
}

exit(main())

