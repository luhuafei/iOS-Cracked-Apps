//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSearchFilter, FBSearchFilterValue;

@protocol FBSearchResultsFiltersActionSheetListener <NSObject>
- (void)announceActionSheetDidToggleCheckmark:(_Bool)arg1 forFilter:(FBSearchFilter *)arg2 value:(FBSearchFilterValue *)arg3;
- (void)announceActionSheetDidTapSearchTextFieldForFilter:(FBSearchFilter *)arg1;
- (void)announceActionSheetDidClearValueForFilter:(FBSearchFilter *)arg1;
- (void)announceActionSheetDidTapFilter:(FBSearchFilter *)arg1;
@end

