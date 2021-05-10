import Foundation


func main() {
    if CommandLine.arguments.count != 2 {
        print("Needs path to exactly one file")
        return
    }

    let fileURL = URL(fileURLWithPath: CommandLine.arguments[1], isDirectory: false)
    guard fileURL.pathExtension == "ui" else {
        print(CommandLine.arguments[1])
        print("File \(fileURL.path) must have extension 'ui'")
        exit(1)
    }
    let outputURL = fileURL.deletingPathExtension().appendingPathExtension("swift")

    guard let document = try? String(contentsOf: fileURL, encoding: .utf8) else {
        print("Could not read \(fileURL.path)")
        return
    }

    guard let xml = document.data(using: .utf8) else {
        // Cannot happen if statement above didn't fail
        return
    }

    let parser = QliftUIParser()
    guard let ui = parser.parseUI(data: xml) else {
        print("XML invalid.")
        exit(1);
    }
    var content = """
    /********************************************************************************
    ** Form generated from reading UI file '\(fileURL.lastPathComponent)'
    **
    ** Created by: Qlift User Interface Compiler version <undefined>
    **
    ** WARNING! All changes made in this file will be lost when recompiling UI file!
    ********************************************************************************/


    """

    content += ui
    do {
        try content.write(to: outputURL, atomically: false, encoding: .utf8)
        print("Created file \(outputURL.path)")
    } catch  {
        print("\(outputURL.path) write error \(error)")
        exit(2)
    }
}

main()
