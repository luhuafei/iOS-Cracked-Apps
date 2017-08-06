//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface KGPhotoEntity : NSObject <NSCopying>
{
    _Bool _isOrigin;
    long long _source;
    long long _originSize;
    NSString *_urlStr;
    UIImage *_thumbImage;
    UIImage *_middleImage;
    UIImage *_originImage;
}

@property(copy, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(copy, nonatomic) UIImage *middleImage; // @synthesize middleImage=_middleImage;
@property(copy, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(nonatomic) long long originSize; // @synthesize originSize=_originSize;
@property(nonatomic) _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)fixedHomePath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localImage;
- (void)imagePathWithCompletion:(CDUnknownBlockType)arg1;
- (void)originImageWithGroupID:(long long)arg1 memberID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)middleImageWithGroupID:(long long)arg1 memberID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)originImageWithOpposingID:(long long)arg1 memberID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)middleImageWithOpposingID:(long long)arg1 memberID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end
