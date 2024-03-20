// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MealzIOSFrameworkSPM",
    defaultLocalization: "fr",
    platforms: [
        .iOS(.v12),
      ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MealzIOSFrameworkSPM",
            targets: ["MealzIOSFrameworkSPM"]),
    ],
    dependencies: [
//        .package(path: "../MealzCore"),
//        .package(url: "https://github.com/miamtech/releaseMealz", from: "1.0.0-beta3"),
    ],
    targets: [
        .binaryTarget(
            name: "MealzIOSFrameworkSPM",
            path: "./MealzIOSFramework.xcframework"
        )
    ]
)
