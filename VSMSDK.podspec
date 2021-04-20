# coding: utf-8
#

Pod::Spec.new do |s|
  s.name                  = "VSMSDK"
  s.version               = `git describe --tags`
#  s.version               = "1.9.444"
  s.license               = 'undefined'
  s.summary               = "VSMSDK"
  s.author                = { 
                              "hoyeon_lee" => "hoyeon_lee@sk.com"
                            }

  s.homepage              = "https://tde.sktelecom.com/stash/projects/TMAPVSMSDK/repos/vsm_sdk_ios/browse"

  s.source                = { :git => "https://tde.sktelecom.com/stash/scm/tmapvsmrel/vsm_sdk_ios.git", :tag => "#{s.version}"}

  s.platform              = :ios, "10.0"
  s.description           = 'VSMSDK'

  s.pod_target_xcconfig = {
    'FRAMEWORK_SEARCH_PATHS'          => '$(inherited) $(PODS_ROOT)',
  }

  # s.prepare_command = <<-CMD
  #   xcodebuild -project "VSMSDK.xcodeproj" -sdk iphonesimulator -target "Framework" build
  # CMD

  #s.dependency 'GBDeviceInfo', '~> 6.3.0'
  s.source_files = []
  s.public_header_files   = []
  s.vendored_frameworks = ["VSMSDK.framework"]
end
