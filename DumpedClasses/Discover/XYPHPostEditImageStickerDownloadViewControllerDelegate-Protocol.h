//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, XYPHPostEditImageStickerDownloadViewController, XYPHSticker;

@protocol XYPHPostEditImageStickerDownloadViewControllerDelegate <NSObject>

@optional
- (void)postEditImageStickerDownloadViewController:(XYPHPostEditImageStickerDownloadViewController *)arg1 didCancelSelectedSticker:(XYPHSticker *)arg2;
- (void)postEditImageStickerDownloadViewController:(XYPHPostEditImageStickerDownloadViewController *)arg1 sticker:(XYPHSticker *)arg2 didDownloadButtonTouchUpInside:(UIButton *)arg3;
@end
