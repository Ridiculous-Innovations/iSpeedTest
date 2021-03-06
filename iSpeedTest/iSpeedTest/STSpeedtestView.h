//
//  STSpeedtestView.h
//  iSpeedTest
//
//  Created by Ondrej Rafaj on 23/11/2012.
//  Copyright (c) 2012 Fuerte Innovations. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "STSubsectionView.h"
#import "STSpeedtest.h"
#import "STHistory.h"


@class STSpeedtestView;

@protocol STSpeedtestViewDelegate <NSObject>

@optional

- (void)speedtestViewDidStartMeasurment:(STSpeedtestView *)view;
- (void)speedtestViewDidStopMeasurment:(STSpeedtestView *)view withResults:(STHistory *)history;

@end


@interface STSpeedtestView : STSubsectionView <STSpeedtestDelegate, CLLocationManagerDelegate>

@property (nonatomic, weak) id<STSpeedtestViewDelegate> delegate;


@end
