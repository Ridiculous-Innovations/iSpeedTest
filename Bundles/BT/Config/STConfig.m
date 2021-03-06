//
//  STConfig.m
//  iSpeedTest
//
//  Created by Ondrej Rafaj on 28/11/2012.
//  Copyright (c) 2012 Fuerte Innovations. All rights reserved.
//

#import "STConfig.h"


@implementation STConfig


#pragma mark App configuration

+ (NSString *)appName {
    return @"BT Speed";
}

+ (NSString *)appIdentifier {
    return [[[self appName] lowercaseString] stringByReplacingOccurrencesOfString:@" " withString:@""];
}

+ (NSString *)developerName {
    return @"BT";
}

+ (NSString *)developerUrl {
    return @"http://www.bt.com/?source=BTSpeed-iPhone-App";
}

+ (NSString *)appSqlFileName {
    return [NSString stringWithFormat:@"%@.sqlite", [self appIdentifier]];
}

+ (NSString *)documentsDirectory {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
}

+ (NSURL *)documentsDirectoryUrl {
    return [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject];
}	

+ (UIFont *)fontWithSize:(CGFloat)size {
    return [UIFont fontWithName:@"FamiliarPro-Bold" size:size];
}

+ (UIColor *)backgroundColor {
    return [UIColor colorWithPatternImage:[UIImage imageNamed:@"SP_bg_lines"]];
}

+ (UIColor *)backgroundMenuColor {
    return [UIColor colorWithHexString:@"D6D6D6"];
}

+ (UIColor *)colorForDownloadLabel {
    return [UIColor colorWithHexString:@"F59C73"];
}

+ (UIColor *)colorForUploadLabel {
    return [UIColor colorWithHexString:@"59B9C7"];
}

+ (UIColor *)historyHeaderBackgroundColor {
    return [UIColor colorWithPatternImage:[UIImage imageNamed:@"SP_header_bg_lines"]];
}

+ (BOOL)showInfoButton {
    return YES;
}


@end
