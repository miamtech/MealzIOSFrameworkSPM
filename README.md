# MiamPublicSPM
Holds MiamCore & MiamIOSFRamework Binaries so that clients can use SPM to use our SDK.

## SPM Installation

on XCode, go to File -> Add Packages, copy & paste the URL (https://github.com/miamtech/MiamPublicSPM). Add the package, binding to the main branch. 

## Usage

Our `miamCore` SDK is shared business logic from Kotlin Multiplatform. This will hold our objects, network requests, shared ViewModels. 
`\n`
`MiamIOSFramework` is the extension of miamCore for iOS, converting shared ViewModels into iOS ViewModels. It also holds UI Views, primarily templating, for our core implementations. All the UI code is built with SwiftUI. 
