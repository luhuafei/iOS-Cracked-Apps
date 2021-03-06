//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView;

@interface CTTourMarketingAdView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MarkAdvDelegate> _markAdvDelegate;
    NSMutableArray *_bannerMArray;
    NSMutableArray *_advMArray;
    UICollectionView *_cttourMarketingCollectionView;
    UIButton *_cttourMarketingLeftButton;
    UIButton *_cttourMarketingRightopnButton;
    UIButton *_cttourMarketingRightBottomButton;
    UIButton *_cttourMarketingBottomLeftButton;
    UIButton *_cttourMarketingBottomRightButton;
    NSLayoutConstraint *_cttourMarketingBannerHeightConstraint;
    NSLayoutConstraint *_cttourMarketingTop2LineHeightConstraint;
    NSLayoutConstraint *_cttourMarketingTopHeightConstraint;
    NSLayoutConstraint *_cttourMarketingVheightMidLineHeightConstraint;
    NSLayoutConstraint *_cttourMarketingRightMidLineHeightConstraint;
    NSLayoutConstraint *_cttourMarketingBottom2LineHeightConstraint;
    NSLayoutConstraint *_cttourMarketingBgBottomLineHeightConstraint;
    NSLayoutConstraint *_cttourMarktingBottomCenterXConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *cttourMarktingBottomCenterXConstraint; // @synthesize cttourMarktingBottomCenterXConstraint=_cttourMarktingBottomCenterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingBgBottomLineHeightConstraint; // @synthesize cttourMarketingBgBottomLineHeightConstraint=_cttourMarketingBgBottomLineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingBottom2LineHeightConstraint; // @synthesize cttourMarketingBottom2LineHeightConstraint=_cttourMarketingBottom2LineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingRightMidLineHeightConstraint; // @synthesize cttourMarketingRightMidLineHeightConstraint=_cttourMarketingRightMidLineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingVheightMidLineHeightConstraint; // @synthesize cttourMarketingVheightMidLineHeightConstraint=_cttourMarketingVheightMidLineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingTopHeightConstraint; // @synthesize cttourMarketingTopHeightConstraint=_cttourMarketingTopHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingTop2LineHeightConstraint; // @synthesize cttourMarketingTop2LineHeightConstraint=_cttourMarketingTop2LineHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cttourMarketingBannerHeightConstraint; // @synthesize cttourMarketingBannerHeightConstraint=_cttourMarketingBannerHeightConstraint;
@property(nonatomic) __weak UIButton *cttourMarketingBottomRightButton; // @synthesize cttourMarketingBottomRightButton=_cttourMarketingBottomRightButton;
@property(nonatomic) __weak UIButton *cttourMarketingBottomLeftButton; // @synthesize cttourMarketingBottomLeftButton=_cttourMarketingBottomLeftButton;
@property(nonatomic) __weak UIButton *cttourMarketingRightBottomButton; // @synthesize cttourMarketingRightBottomButton=_cttourMarketingRightBottomButton;
@property(nonatomic) __weak UIButton *cttourMarketingRightopnButton; // @synthesize cttourMarketingRightopnButton=_cttourMarketingRightopnButton;
@property(nonatomic) __weak UIButton *cttourMarketingLeftButton; // @synthesize cttourMarketingLeftButton=_cttourMarketingLeftButton;
@property(nonatomic) __weak UICollectionView *cttourMarketingCollectionView; // @synthesize cttourMarketingCollectionView=_cttourMarketingCollectionView;
@property(retain, nonatomic) NSMutableArray *advMArray; // @synthesize advMArray=_advMArray;
@property(retain, nonatomic) NSMutableArray *bannerMArray; // @synthesize bannerMArray=_bannerMArray;
@property(nonatomic) __weak id <MarkAdvDelegate> markAdvDelegate; // @synthesize markAdvDelegate=_markAdvDelegate;
- (void).cxx_destruct;
- (_Bool)responseToDelegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)bottomRightAction:(id)arg1;
- (void)bottomLeftAction:(id)arg1;
- (void)rightBottomAction:(id)arg1;
- (void)rightTopAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (id)getImageForSize:(struct CGSize)arg1;
- (void)setBannerCollectionView;
- (void)defaultConfig;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

