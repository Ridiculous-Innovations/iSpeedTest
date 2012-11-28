//
//  UIView+Layout.h
//  FT2Library
//
//  Created by Simon Lee on 21/12/2009.
//  Copyright 2009 Fuerte International. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define UIViewAutoresizingFlexibleAllMargins UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin

#define UIViewAutoresizingFlexibleVerticalMargins UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleTopMargin

#define UIViewAutoresizingFlexibleHorizontalMargins UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin

@interface UIView (Layout)

- (CGFloat)width;
- (void)setWidth:(CGFloat)width;

- (CGFloat)height;
- (void)setHeight:(CGFloat)height;

- (CGFloat)xOrigin;
- (void)setXOrigin:(CGFloat)xOrigin;

- (CGFloat)yOrigin;
- (void)setYOrigin:(CGFloat)yOrigin;

- (CGPoint)origin;
- (void)setOrigin:(CGPoint)origin;
- (void)positionAtX:(CGFloat)xOrigin andY:(CGFloat)yOrigin;

- (CGSize)size;
- (void)setSize:(CGSize)size;
- (void)setWidth:(CGFloat)width andHeight:(CGFloat)height;

- (CGFloat)bottom;
- (void)setBottom:(CGFloat)bottom;

- (CGFloat)right;
- (void)setRight:(CGFloat)right;

//returns the center of the view in the view's coordinates system
- (CGPoint)boundsCenter;

- (void)setCenterIntegral:(CGPoint)center;

//set the anchorPoint without moving the view
- (void)setAnchorPoint:(CGPoint)anchorPoint;
- (CGPoint)anchorPoint;

//superview related

- (void)centerInSuperview;
- (void)centerVertically;
- (void)centerHorizontally;

- (void)makeMarginInSuperViewWithTopMargin:(CGFloat)topMargin leftMargin:(CGFloat)leftMargin rightMargin:(CGFloat)rightMargin andBottomMargin:(CGFloat)bottomMargin;
- (void)makeMarginInSuperViewWithTopMargin:(CGFloat)topMargin andSideMargin:(CGFloat)sideMargin;
- (void)makeMarginInSuperView:(CGFloat)margin;
- (CGFloat)bottomMargin;
- (void)setBottomMargin:(CGFloat)bottomMargin;
- (CGFloat)rightMargin;
- (void)setRightMargin:(CGFloat)rightMargin;

//autoresizing

- (void)setAutoresizingNone;
- (void)setAutoresizingBottomLeft;
- (void)setAutoresizingBottomRight;
- (void)setAutoresizingTopLeft;
- (void)setAutoresizingTopRight;
- (void)setAutoresizingTopCenter;
- (void)setAutoresizingCenter;
- (void)setAutoresizingBottomCenter;
- (void)setAutoresizingWidthAndHeight;


@end
