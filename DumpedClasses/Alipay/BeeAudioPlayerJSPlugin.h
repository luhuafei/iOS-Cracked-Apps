//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeeAudioPlayerDelegate.h"
#import "PSDPluginProtocol.h"

@class NSMutableArray, NSString;

@interface BeeAudioPlayerJSPlugin : NSObject <PSDPluginProtocol, BeeAudioPlayerDelegate>
{
    NSMutableArray *_registerVCArray;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (void)playedInfo:(id)arg1;
- (void)callHandlerWithName:(id)arg1 dic:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

