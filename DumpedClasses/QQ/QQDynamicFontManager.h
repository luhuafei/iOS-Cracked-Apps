//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDynamicFontManager : NSObject
{
    struct {
        double _fontScale;
        double _systemScale;
        _Bool _useSystem;
        _Bool _firstRun;
    } _dynamicFontFlags;
}

+ (id)GetInstances;
- (_Bool)saveDynamicFontScale:(double)arg1;
- (double)dynamicFontScale;
- (void)synchronize;
- (void)read;
- (void)enterForeground;
- (double)systemFontScale;
- (void)readDynamicScale;
- (_Bool)lowDeviceNeedNotDYFont;

@end

