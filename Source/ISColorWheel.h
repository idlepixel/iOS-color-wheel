/*
 By: Justin Meiners
 
 Copyright (c) 2013 Inline Studios
 Licensed under the MIT license: http://www.opensource.org/licenses/mit-license.php
*/

#import <UIKit/UIKit.h>

@class ISColorWheel;

@protocol ISColorWheelDelegate <NSObject>

@required
- (void)colorWheelDidChangeColor:(ISColorWheel*)colorWheel;

@end


@interface ISColorWheel : UIView

@property (nonatomic, assign) int clampRGBAmount;
@property (nonatomic, assign) int clampRGBMargin;

@property (nonatomic, assign) float hueCount;
@property (nonatomic, assign) float hueOffset;

@property (nonatomic, assign) float saturationCount;
@property (nonatomic, assign) float saturationMinimum;
@property (nonatomic, assign) float saturationMaximum;

@property (nonatomic, assign) CGFloat brightness;

@property (nonatomic, assign) BOOL swapSaturationAndBrightness;

@property (nonatomic, strong) UIView* knobView;
@property (nonatomic, assign) CGSize knobSize;
@property (nonatomic, assign) CGFloat knobBorderWidth;
@property (nonatomic, strong) UIColor* knobBorderColor;
@property (nonatomic, assign) BOOL knobShowsCurrentColor;

@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, strong) UIColor* borderColor;

@property (nonatomic, assign) BOOL continuous;
@property (nonatomic, weak) id <ISColorWheelDelegate> delegate;
@property (assign) UIColor* currentColor;

- (void)updateImage;
- (void)setTouchPoint:(CGPoint)point;

@end
