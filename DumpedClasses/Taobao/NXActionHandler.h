//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NXActionHandler : NSObject
{
    NSMutableDictionary *_handlerAction;
}

+ (void)clearAction:(id)arg1;
+ (void)registerAction:(id)arg1 handler:(id)arg2;
+ (id)keyForEvent:(int)arg1;
+ (int)eventForKey:(id)arg1;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 actionArray:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleViewAction:(id)arg1 actionArray:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAction:(id)arg1 args:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleEvent:(int)arg1;
- (void)clearAction:(id)arg1;
- (void)registerActionEvent:(int)arg1 handler:(id)arg2;
- (void)registerAction:(id)arg1 handler:(id)arg2;
- (void)registerAllActionHandler:(id)arg1;
- (id)init;

@end

