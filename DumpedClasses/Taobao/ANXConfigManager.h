//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANXDeviceConfig, ANXProductConfig, ANXUserConfig;

@interface ANXConfigManager : NSObject
{
    ANXUserConfig *_userConfig;
    ANXDeviceConfig *_deviceConfig;
    ANXProductConfig *_productConfig;
}

+ (id)sharedManager;
@property(retain, nonatomic) ANXProductConfig *productConfig; // @synthesize productConfig=_productConfig;
@property(retain, nonatomic) ANXDeviceConfig *deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property(retain, nonatomic) ANXUserConfig *userConfig; // @synthesize userConfig=_userConfig;
- (void).cxx_destruct;

@end
