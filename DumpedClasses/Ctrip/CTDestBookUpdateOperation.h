//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestCommonOperation.h"

@class CTDestDownLoadModel, NSMutableArray;

@interface CTDestBookUpdateOperation : CTDestCommonOperation
{
    _Bool _isCancelOperation;
    CTDestDownLoadModel *_bakModel;
    NSMutableArray *_delPhotoModelArray;
}

@property(nonatomic) _Bool isCancelOperation; // @synthesize isCancelOperation=_isCancelOperation;
@property(retain, nonatomic) NSMutableArray *delPhotoModelArray; // @synthesize delPhotoModelArray=_delPhotoModelArray;
@property(copy, nonatomic) CTDestDownLoadModel *bakModel; // @synthesize bakModel=_bakModel;
- (void).cxx_destruct;
- (id)findNeedDelImageArray:(id)arg1 downLoadedArray:(id)arg2;
- (id)findNeedDownLoadImageArray:(id)arg1 downLoadedArray:(id)arg2;
- (void)main;
- (void)cancel;

@end
