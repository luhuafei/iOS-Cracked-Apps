//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTESBugrptObjectTransToBuffer.h"

@class NSString;

@interface NTESBugrptStartupInfoPackage : NSObject <NTESBugrptObjectTransToBuffer>
{
    long long _type;
    NSString *_diskSize;
    NSString *_memSize;
    NSString *_cpuArch;
    NSString *_isRoot;
}

@property(retain, nonatomic) NSString *isRoot; // @synthesize isRoot=_isRoot;
@property(retain, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(retain, nonatomic) NSString *memSize; // @synthesize memSize=_memSize;
@property(retain, nonatomic) NSString *diskSize; // @synthesize diskSize=_diskSize;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)transObjectToBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

