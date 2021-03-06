//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSString, UIImage, UIImageView;

@protocol MTImageProtocol <MTProtocol>
- (void)clearWebImageMemory;
- (NSString *)converWithPath:(NSString *)arg1 ratio:(NSString *)arg2;
- (NSString *)getAdjustRatioUrlWithFullUrlStr:(NSString *)arg1 frameSize:(struct CGSize)arg2;
- (NSString *)briefConvertFullImagePath:(NSString *)arg1;
- (NSString *)fixedUrlWithUrl:(NSString *)arg1 ratio:(NSString *)arg2;
- (id <MTImageOperation>)imageForUrl:(NSString *)arg1 completion:(void (^)(UIImage *, NSError *, int, NSURL *))arg2;
- (UIImage *)imageForUrl:(NSString *)arg1;
- (void)setImageView:(UIImageView *)arg1 url:(NSString *)arg2 ratio:(NSString *)arg3 placeholder:(UIImage *)arg4 completion:(void (^)(UIImage *, NSError *, int, NSURL *))arg5;
@end

