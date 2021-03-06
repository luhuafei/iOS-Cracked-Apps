//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTBugFixAttributedLabelDelegate.h"

@class ExploreCellViewBase, ExploreOrderedData, NSArray, NSURL, TTFeedCellSelectContext, TTFollowThemeButton, UIButton, UIView;

@protocol UGCCellViewAction <TTBugFixAttributedLabelDelegate>
@property(retain, nonatomic) ExploreOrderedData *orderedData;
- (id)initWithCellView:(ExploreCellViewBase *)arg1;

@optional
- (void)didSelectWithContext:(TTFeedCellSelectContext *)arg1;
- (void)showPhoto:(NSArray *)arg1 displayImages:(NSArray *)arg2 viewFrames:(NSArray *)arg3 index:(unsigned long long)arg4 targetView:(UIView *)arg5;
- (void)linkTap:(NSURL *)arg1;
- (void)unInterestedAction:(UIView *)arg1;
- (void)forwardAction;
- (void)commentAction;
- (void)diggAction:(UIButton *)arg1;
- (void)webpageTouchUpInside;
- (void)repostAction;
- (void)forwardedItemTouchUp;
- (void)followAction:(TTFollowThemeButton *)arg1;
- (void)tapAvatarOrName;
- (void)trackCellShow;
@end

