//
//  SparkSetupWifiTableViewCell.h
//  Pods
//
//  Created by Ido on 8/13/15.
//
//

#import <UIKit/UIKit.h>

@interface SparkSetupWifiTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *ssidLabel;
@property (weak, nonatomic) IBOutlet UIImageView *wifiStrengthImageView;
@property (weak, nonatomic) IBOutlet UIImageView *securedNetworkIconImageView;

@end
