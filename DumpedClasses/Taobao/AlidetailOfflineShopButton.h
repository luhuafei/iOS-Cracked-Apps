//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliDetailStoreModel, UIImageView, UILabel;

@interface AlidetailOfflineShopButton : UIView
{
    UIImageView *_bgView;
    UILabel *_lblTitle;
    UIImageView *_icon;
    AliDetailStoreModel *_storeModel;
}

@property(nonatomic) __weak AliDetailStoreModel *storeModel; // @synthesize storeModel=_storeModel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;

@end

