//
//  KDBannerView.h
//  zhonghaijinchao
//
//  Created by Blankwonder on 5/30/15.
//  Copyright (c) 2015 Blankwonder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDBannerView;

@protocol KDBannerViewDelegate <NSObject>
@optional
- (void)bannerView:(KDBannerView *)bannerView didTapView:(UIView *)view atIndex:(NSInteger)index;
- (void)bannerView:(KDBannerView *)bannerView didScrollToView:(UIView *)view atIndex:(NSInteger)index;

@end

@interface KDBannerView : UIView

@property (weak, nonatomic) IBOutlet id<KDBannerViewDelegate> delegate;

@property (nonatomic) NSTimeInterval autoScrollDuration;
@property (nonatomic) CGFloat pageControlBottomInset;

@property (nonatomic, copy) NSArray *views;

@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic, readonly) UIScrollView *scrollView;

@property (nonatomic) NSInteger currentIndex;
- (void)setCurrentIndex:(NSInteger)currentIndex animated:(BOOL)animated;

@property (nonatomic) BOOL tapEnabled;

@end
