//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTabbarItemDataSource.h"

@class MTabbarModel, NSMutableArray, NSString, UIImageView;

@interface MTabbar : UIView <MTabbarItemDataSource>
{
    long long _selectedIndex;
    MTabbarModel *_model;
    id <MTabbarProtocal> _delegate;
    NSMutableArray *_tabbarItems;
    UIView *_divider;
    UIImageView *_bgImageView;
}

+ (id)tabbarWithTabbarModel:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSMutableArray *tabbarItems; // @synthesize tabbarItems=_tabbarItems;
@property(nonatomic) __weak id <MTabbarProtocal> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTabbarModel *model; // @synthesize model=_model;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (id)iconFontResourceUrl;
- (id)badgeColor;
- (id)badgeBackgroundColor;
- (id)selectedBgColor;
- (id)normalBgColor;
- (id)selectedColor;
- (id)normalColor;
- (id)dividerColor;
- (void)showTabItemWithTabIndex:(long long)arg1;
- (void)hideTabItemWithTabIndex:(long long)arg1;
- (void)handleTabbarItemClick:(id)arg1;
- (void)tabbarItemClicked:(id)arg1;
- (void)selecteDefaultTabbarItem;
- (id)addTabbarItem:(id)arg1;
- (void)addTabbarItems:(id)arg1;
- (void)reloadTabbarItems;
- (id)tabbarModelWithTabId:(id)arg1;
- (void)switchToTabIndex:(long long)arg1;
- (void)removeTabbarItemWithItemId:(id)arg1;
- (void)updateTabbarItemWithItemModel:(id)arg1;
- (void)reset;
- (void)addTabbarItem:(id)arg1 index:(long long)arg2;
- (void)refreshTabbarWithTabbarModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

