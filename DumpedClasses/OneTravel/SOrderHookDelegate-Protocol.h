//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@protocol SOrderHookDelegate <NSObject>
- (void)unhookOrderStatus:(NSNumber *)arg1;
- (void)hookOrderStatus:(NSNumber *)arg1 forObject:(id <SOrderComHookerDelegate>)arg2;
@end

