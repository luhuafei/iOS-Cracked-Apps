//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ARTEvent : NSObject
{
    NSString *_name;
    id _eventObj;
    NSDictionary *_userInfo;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id eventObj; // @synthesize eventObj=_eventObj;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end
