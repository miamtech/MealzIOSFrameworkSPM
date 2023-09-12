// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MiamPublicSPM",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MiamPublicSPM",
            targets: ["miamCore", "MiamIOSFramework"]),
    ],
    targets: [
        .binaryTarget(
            name: "miamCore",
            path: "Sources/miamCore.xcframework"
        ),
        .binaryTarget(
            name: "MiamIOSFramework",
            path: "Sources/MiamIOSFramework.xcframework"
        )
    ]
)
