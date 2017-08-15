import Foundation
import Qlift


func main() {
    if CommandLine.arguments.count != 2 {
        print("Needs path to exactly one file")
        return
    }

    let fileURL = URL(fileURLWithPath: CommandLine.arguments[1], isDirectory: false)

    guard let document = try? String(contentsOf: fileURL, encoding: .utf8) else {
        print("Could not read \(fileURL)")
        return
    }

    guard let xml = document.data(using: .utf8) else {
        // Cannot happen if statement above didn't fail
        return
    }

    let parser = QliftUIParser()
    let ui = parser.parseUI(data: xml)
    if ui != nil {
        var content = ""
        content += "/********************************************************************************\n"
        content += "** Form generated from reading UI file '\(fileURL.lastPathComponent)'\n"
        content += "**\n"
        content += "** Created by: Qlift User Interface Compiler version 0.0.50\n"
        content += "**\n"
        content += "** WARNING! All changes made in this file will be lost when recompiling UI file!\n"
        content += "********************************************************************************/\n"
        content += "\n"
        print(content + ui!)
    } else {
        print("XML invalid.")
    }
}

main()

