//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBlockOperation.h"

@interface VRAsyncDrawTask : NSBlockOperation
{
    _Bool _stop;
    _Bool _isNeedBindBack;
    CDUnknownBlockType _bindVRData;
    struct CGRect _rect;
}

@property(copy, nonatomic) CDUnknownBlockType bindVRData; // @synthesize bindVRData=_bindVRData;
@property(nonatomic) _Bool isNeedBindBack; // @synthesize isNeedBindBack=_isNeedBindBack;
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isStop;

@end

