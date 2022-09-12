#
# Be sure to run `pod lib lint MIRToolTip.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MIRToolTip'
  s.version          = '0.1.2'
  s.summary          = 'A convenience cocoa pod that extends view controller class that displays a tooltip.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
"A convenience cocoa pod that extends view controller class for presenting customizable tooltip messages."
                       DESC

  s.homepage         = 'https://github.com/mir-taqi/MIRToolTip'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'mir-taqi' => 'taqi1435@gmail.com' }
  s.source           = { :git => 'https://github.com/mir-taqi/MIRToolTip.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'MIRToolTip/Classes/*.h', 'MIRToolTip/Classes/*.m'
  
  # s.resource_bundles = {
  #   'MIRToolTip' => ['MIRToolTip/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
