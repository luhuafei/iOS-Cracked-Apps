//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMItemDO;

@protocol FMPostComponentProtocol <NSObject>

@optional
- (void)requestPost;
- (void)requestData;
- (void)composeItemDO:(FMItemDO *)arg1;
- (void)setupWithItemDO:(FMItemDO *)arg1;
- (_Bool)isPostContentEmpty;
- (_Bool)validPostContent;
@end

