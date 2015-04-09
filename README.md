<p align="center" >
<img src="https://s3.amazonaws.com/spark-website/spark.png" alt="Spark" title="Spark">
</p>

# SparkSetup (beta)
The Spark Soft AP setup library is meant for integrating the initial setup process of Spark devices in your app.
This library will enable you to easily invoke a standalone setup wizard UI for setting up internet-connect products
powered by a Spark Photon/P0/P1. The setup UI can be easily customized by a customization proxy class available to the user
that includes: look & feel, colors, fonts as well as custom brand logos and instructional video for your product.

<!---
[![CI Status](http://img.shields.io/travis/spark/SparkSetup.svg?style=flat)](https://travis-ci.org/spark/SparkSetup)
[![Version](https://img.shields.io/cocoapods/v/Spark-Setup.svg?style=flat)](http://cocoapods.org/pods/SparkSetup)
[![License](https://img.shields.io/cocoapods/l/Spark-Setup.svg?style=flat)](http://cocoapods.org/pods/SparkSetup)
[![Platform](https://img.shields.io/cocoapods/p/Spark-Setup.svg?style=flat)](http://cocoapods.org/pods/SparkSetup)
-->

## Usage

### Basic
Import `SparkSetup.h` in your view controller implementation file, and invoke setup wizard by:
```Objective-C
SparkSetupMainController *setupController = [SparkSetupMainController new];
[self presentViewController:setupController animated:YES completion:nil];
```

### Customization

Customize setup look and feel by accessing the SparkSetupCustomization singleton appearance proxy `[SparkSetupCustomization sharedInstance]`
and modify its properties -

#### Product/brand info:
```
 NSString *deviceName;          // Device/product name 
 UIImage *deviceImage;          // Device/product image

 NSString *brandName;           // Your brand name
 UIImage *brandImage;           // Your brand logo to fit in header of setup wizard screens
 UIColor *brandImageBackgroundColor;    // brand logo background color
 NSString *welcomeVideoFilename;        // Welcome screen instructional video
 NSString *appName;                     // Your setup app name
```

#### Technical info:
```
 NSString *modeButtonName;              // The mode button name on your product
 NSString *listenModeLEDColorName;      // The color of the LED when product is in listen mode
 NSString *networkNamePrefix;           // The SSID prefix of the Soft AP Wi-Fi network of your product while in listen mode
```

#### Links for legal/technical stuff:
```
 NSURL *termsOfServiceLinkURL; // URL for terms of service of the app/device usage
 NSURL *privacyPolicyLinkURL;  // URL for privacy policy of the app/device usage
 NSURL *forgotPasswordLinkURL; // URL for user password reset (non-organization setup app only)
 NSURL *troubleshootingLinkURL; // URL for troubleshooting text of the app/device usage

 NSString *termsOfServiceHTMLFile; // Static HTML file for terms of service of the app/device usage
 NSString *privacyPolicyHTMLFile;  // Static HTML file for privacy policy of the app/device usage
 NSString *forgotPasswordHTMLFile; // Static HTML file for user password reset (non-organization setup app only)
 NSString *troubleshootingHTMLFile; // Static HTML file for troubleshooting text of the app/device usage
```

#### Look & feel:
```
 UIColor *pageBackgroundColor;
 UIColor *normalTextColor;
 UIColor *linkTextColor;
 UIColor *errorTextColor;
 UIColor *elementBackgroundColor;  // Buttons/spinners background color
 UIColor *elementTextColor;        // Buttons text color
 NSString *normalTextFontName;     // Customize setup font - include OTF/TTF file in project
 NSString *boldTextFontName;       // Customize setup font - include OTF/TTF file in project
 CGFloat fontSizeOffset;           // Set offset of font size so small/big fonts can be fine-adjusted
```

#### Organization:
```
 BOOL organization;                 // enable organization mode - activation codes, other organizational APIs
 NSString *organizationName;        // organization name
```

### Advanced

You can get an active instance of `SparkDevice` by making your viewcontroller conform to protocol `<SparkSetupMainControllerDelegate>` when Setup Wizard completes:
```Objective-C
-(void)sparkSetupViewController:(SparkSetupMainController *)controller didFinishWithResult:(SparkSetupMainControllerResult)result device:(SparkDevice *)device;
```
method will be called, if `(result == SparkSetupMainControllerResultSuccess)` the device parameter will contain an active `SparkDevice` instance you can interact with
using the [Spark-SDK](https://cocoapods.org/pods/Spark-SDK).

#### Support for Swift projects
To use SparkSetup from within Swift based projects [read here](http://swiftalicio.us/2014/11/using-cocoapods-from-swift/), 
also be sure the check out [Apple documentation](https://developer.apple.com/library/ios/documentation/Swift/Conceptual/BuildingCocoaApps/InteractingWithObjective-CAPIs.html) on this matter

## Requirements

iOS 7.1+ supported

Currently wizard works on portait mode only.

## Installation

Spark-Setup is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "SparkSetup"
```

## Communication

- If you **need help**, use [Our community website](http://community.spark.io)
- If you **found a bug**, _and can provide steps to reliably reproduce it_, open an issue.
- If you **have a feature request**, open an issue.
- If you **want to contribute**, submit a pull request.


## Author

Ido K, ido@spark.io
Spark

## License

SparkSetup is available under the LGPL v3 license. See the LICENSE file for more info.
