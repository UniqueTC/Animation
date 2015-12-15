//
//  Animation.h
//  AF
//
//  Created by TC on 15/12/15.
//  Copyright © 2015年 TC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface Animation : NSObject

+ (void)showAnmationType:(NSString *)type
                     withSubType:(NSString *)subType
                           duration:(CFTimeInterval)duration
                   timingFuction:(NSString *)timingFunction
                                view:(UIView*)theView;
//CATranstion
+ (void)animationRevealFromBottom:(UIView *)view;//底部向上
+ (void)animationRevealFromTop:(UIView *)view;//从上到下
+ (void)animationRevealFromLeft:(UIView *)view;//从左到右
+ (void)animationRevealFromRight:(UIView *)view;//从右到左
//push
+ (void)animationPushUp:(UIView *)view;
+ (void)animationPushDown:(UIView *)view;
+ (void)animationPushLeft:(UIView *)view;
+ (void)animationPushRight:(UIView *)view;
//present
+ (void)animationMoveUp:(UIView *)view duration:(CFTimeInterval)duration;

//UIView Animaiton
+ (void)animationFlipFromLeft:(UIView *)view;
+ (void)animationFlipFromRigh:(UIView *)view;
+ (void)animationCurlUp:(UIView *)view;
+ (void)animationCurlDown:(UIView *)view;
@end
