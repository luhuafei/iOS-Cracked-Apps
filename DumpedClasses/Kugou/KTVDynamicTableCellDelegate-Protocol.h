//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KtvDynamicTableCell, NSTextCheckingResult;

@protocol KTVDynamicTableCellDelegate <NSObject>
- (void)showListenFansGift:(KtvDynamicTableCell *)arg1;
- (void)deleteDynamicTableCell:(KtvDynamicTableCell *)arg1;
- (void)dynamicCell:(KtvDynamicTableCell *)arg1 didClickToExpendMenu:(_Bool)arg2;
- (void)dynamicTableCell:(KtvDynamicTableCell *)arg1 eventType:(int)arg2;
- (void)dynamicInviDetail:(KtvDynamicTableCell *)arg1 eventWithLink:(NSTextCheckingResult *)arg2;
- (void)dynamicCell:(KtvDynamicTableCell *)arg1 didChangedHeight:(float)arg2;
- (void)dynamicCell:(KtvDynamicTableCell *)arg1 tapEventAreaType:(int)arg2;
- (void)dynamicCell:(KtvDynamicTableCell *)arg1 playing:(_Bool)arg2;
@end

