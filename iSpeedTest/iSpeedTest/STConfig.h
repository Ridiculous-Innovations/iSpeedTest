//
//  STConfig.h
//  iSpeedTest
//
//  Created by Ondrej Rafaj on 28/11/2012.
//  Copyright (c) 2012 Fuerte Innovations. All rights reserved.
//

#import "STSystemConfig.h"
#import <UIKit/UIKit.h>


@interface STConfig : STSystemConfig

+ (NSString *)appName;

+ (NSString *)appIdentifier;

+ (NSString *)developerName;

+ (NSString *)developerUrl;

+ (NSString *)appSqlFileName;

+ (NSString *)documentsDirectory;

+ (NSURL *)documentsDirectoryUrl;

+ (UIFont *)fontWithSize:(CGFloat)size;

+ (UIColor *)backgroundColor;

+ (UIColor *)backgroundMenuColor;

+ (UIColor *)historyHeaderBackgroundColor;

+ (UIColor *)colorForDownloadLabel;
+ (UIColor *)colorForUploadLabel;

+ (BOOL)showInfoButton;


@end
