//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseLogModel.h"

@class NSDictionary, NSString;

@interface ANXPackageModel : ANXBaseLogModel
{
    NSString *_pkgName;
    NSString *_pkgVerionName;
    NSString *_pkgVersionCode;
    NSDictionary *_infoDictionary;
}

@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(copy, nonatomic) NSString *pkgVersionCode; // @synthesize pkgVersionCode=_pkgVersionCode;
@property(copy, nonatomic) NSString *pkgVerionName; // @synthesize pkgVerionName=_pkgVerionName;
@property(copy, nonatomic) NSString *pkgName; // @synthesize pkgName=_pkgName;
- (void).cxx_destruct;
- (id)childModelContents;
- (id)init;

@end

