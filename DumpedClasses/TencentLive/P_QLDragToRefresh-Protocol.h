//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView, UIView;

@protocol P_QLDragToRefresh <NSObject>
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (UIScrollView *)dragRefreshView;

@optional
- (UIView *)customTableFooterView;
- (_Bool)hasCustomTableFooterView;
- (void)RequestData:(int)arg1;
- (long long)headerDragRefreshStyle;
- (long long)footerDragRefreshStyle;
@end

