#
# Be sure to run `pod lib lint SSPSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SSPSDK'
  s.version          = '0.0.1'
  s.summary          = 'SSPSDK is a framework which include all kinds of advertisements.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  SSPSDK is a framework which include all kinds of advertisements. Ads include splash ads,rewarded video ads,banner ads, interstitial ads,etc.
                       DESC

  s.homepage         = 'https://github.com/iYiming/SSPSDK'
  s.license          = { :type => 'Commercial', :file => 'LICENSE' }
  s.author           = { 'iYiming' => 'mayiming@appadhoc.com' }
  s.source           = { :git => 'https://github.com/iYiming/SSPSDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.default_subspecs = 'SSPSDK'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.subspec 'SSPSDK' do |sp|
      sp.vendored_frameworks = 'SSPSDK/SSPSDK.framework'
      sp.frameworks = 'UIKit', 'Foundation', 'WebKit', 'AdSupport', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit'
  end
  
  s.subspec 'GDT' do |ssp|
      ssp.vendored_frameworks = 'SSPSDK/Plugins/GDTPlugin.framework'
      ssp.frameworks = 'CoreLocation', 'QuartzCore', 'AVFoundation'
      ssp.libraries = 'z', 'xml2'
      ssp.dependency 'SSPSDK/SSPSDK'
  end
  
end
