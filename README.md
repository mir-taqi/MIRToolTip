# MIRToolTip

[![CI Status](https://img.shields.io/travis/mir-taqi/MIRToolTip.svg?style=flat)](https://travis-ci.org/mir-taqi/MIRToolTip)
[![Version](https://img.shields.io/cocoapods/v/MIRToolTip.svg?style=flat)](https://cocoapods.org/pods/MIRToolTip)
[![License](https://img.shields.io/cocoapods/l/MIRToolTip.svg?style=flat)](https://cocoapods.org/pods/MIRToolTip)
[![Platform](https://img.shields.io/cocoapods/p/MIRToolTip.svg?style=flat)](https://cocoapods.org/pods/MIRToolTip)

## Example

A convenience library that extends UIViewController class useful for presenting customizable tooltip messages.


To run the example project, clone the repo, and run `pod install` 

Just call the method as below.

[MIRToolTip showCardAlertWithTitle:SejelLocalizedString(@"No Internet connection", nil)
                              message:SejelLocalizedString(@"Please make sure there is Internet connection.", nil)
                             duration:4.f
                          hideOnSwipe:YES
                            hideOnTap:YES
                            alertType:AlertTypeError
                        alertPosition:AlertPositionTop
                              didHide:^(BOOL finished) {
                                  NSLog(@"Alert did hide.");
                              }];
   

## Requirements

## Installation

MIRToolTip is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'MIRToolTip'
```

## Author

mir-taqi

## License

MIRToolTip is available under the MIT license. See the LICENSE file for more info.
