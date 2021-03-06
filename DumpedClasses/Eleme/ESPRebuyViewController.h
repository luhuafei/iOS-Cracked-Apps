//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class ESPRebuyFoodInfoView, ESPRebuyInfo, UIImageView, UILabel;

@interface ESPRebuyViewController : NVMViewController
{
    ESPRebuyInfo *_rebuyInfo;
    UIImageView *_errorLogoView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    ESPRebuyFoodInfoView *_foodInfoView;
}

+ (void)gotoRestaurant:(id)arg1 fromViewController:(id)arg2 automaticlyExpandCartViewWhenShow:(_Bool)arg3;
+ (id)toRestaurantActionFromInfo:(id)arg1 withCartContext:(id)arg2 needGoToRestaurant:(_Bool)arg3 sourceViewController:(id)arg4;
+ (id)cancelAction;
+ (id)okAction;
+ (void)updateCartFromInfo:(id)arg1 currentContext:(id)arg2;
+ (void)showRebuyWithInfo:(id)arg1 fromViewController:(id)arg2 needGoToRestaurant:(_Bool)arg3 currentContext:(id)arg4;
+ (void)tryRebuyOrder:(id)arg1 ofRestaurant:(id)arg2 currentContext:(id)arg3 fromViewController:(id)arg4 needGoToRestaurant:(_Bool)arg5 requestCompletion:(CDUnknownBlockType)arg6;
+ (void)tryRebuyOrder:(id)arg1 ofRestaurant:(id)arg2 currentContext:(id)arg3 fromViewController:(id)arg4 needGoToRestaurant:(_Bool)arg5;
+ (void)tryRebuyOrder:(id)arg1 ofRestaurant:(id)arg2 currentContext:(id)arg3 fromViewController:(id)arg4 requestCompletion:(CDUnknownBlockType)arg5;
+ (void)tryRebuyOrder:(id)arg1 ofRestaurant:(id)arg2 fromViewController:(id)arg3;
@property(retain, nonatomic) ESPRebuyFoodInfoView *foodInfoView; // @synthesize foodInfoView=_foodInfoView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *errorLogoView; // @synthesize errorLogoView=_errorLogoView;
@property(retain, nonatomic) ESPRebuyInfo *rebuyInfo; // @synthesize rebuyInfo=_rebuyInfo;
- (void).cxx_destruct;
- (id)blankSpaceView;
- (void)generateViewsFromData:(id)arg1;
- (void)generateSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRebuyInfo:(id)arg1;

@end

