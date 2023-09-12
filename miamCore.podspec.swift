Pod::Spec.new do |spec|
    spec.name              = 'miamCore'
    spec.version           = ENV['MIAM_CORE_VERSION']
    spec.summary           = 'Miam Core for iOS'
    spec.homepage          = 'https://www.miam.tech'
    spec.description           = <<-DESC
       Miam Core SDK for iOS.
       DESC
    spec.author            = { 'Diarmuid McGonagle' => 'it@miam.tech' }
    spec.license           = { :type => 'GPLv3', :file => 'LICENSE' }
    spec.swift_versions = "5.8"
    spec.platform          = :ios, "11.0"
    spec.source            = { :git => "https://github.com/miamtech/MiamPublicSPM.git", :tag => "#{spec.version}" }
    spec.source_files = 'Sources/**/*.{h,m,swift}'
    spec.ios.vendored_frameworks = 'Sources/miamCore.xcframework'
end
