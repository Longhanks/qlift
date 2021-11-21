// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Qlift",
    products: [
        .executable(name: "qlift-uic", targets: ["qlift-uic"]),
        .library(name: "Qlift", targets: ["Qlift"]),
    ],
    targets: [
        .target(name: "Qlift", dependencies: ["CQlift"]),
        .target(name: "CQlift",
                dependencies: ["CQt5Widgets"],
                cxxSettings: [.headerSearchPath("private")]),
        .systemLibrary(name: "CQt5Widgets", pkgConfig: "Qt5Widgets"),
        .target(name: "qlift-uic")
    ],
    cxxLanguageStandard: .cxx1z
)
