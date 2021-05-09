// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Qlift",
    products: [
        .executable(
            name: "qlift-uic",
            targets: ["qlift-uic"]
        ),
        .library(
            name: "Qlift",
            targets: ["Qlift"]),
    ],
    targets: [
        .target(
            name: "Qlift",
            dependencies: ["CQlift"],
            path: "Sources/Qlift"),
        .target(
            name: "CQlift",
            dependencies: [
                .target(name: "CQt5Widgets")
            ],
            path: "Sources/qlift-c-api"),
        .systemLibrary(
            name: "CQt5Widgets", pkgConfig: "Qt5Widgets"),
        .target(
            name: "qlift-uic")
    ],
    cxxLanguageStandard: .cxx1z
)
