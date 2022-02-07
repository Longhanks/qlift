// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Qlift",
    products: [
        .library(name: "Qlift", targets: ["Qlift"]),
    ],
    targets: [
        .target(name: "Qlift", dependencies: ["CQlift"]),
        .target(name: "CQlift",
                dependencies: ["CQt5Widgets", "CQt5Quick"],
                cxxSettings: [.headerSearchPath("private")]),
        .systemLibrary(name: "CQt5Widgets", pkgConfig: "Qt5Widgets"),
        .systemLibrary(name: "CQt5Quick", pkgConfig: "Qt5Quick"),
    ],
    cxxLanguageStandard: .cxx1z
)
