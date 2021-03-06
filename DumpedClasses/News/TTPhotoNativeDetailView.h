//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ExploreImageCollectionViewDelegate.h"

@class ExploreImageCollectionView, NSString, TTDetailModel;

@interface TTPhotoNativeDetailView : SSViewBase <ExploreImageCollectionViewDelegate>
{
    TTDetailModel *_detailModel;
    id <TTPhotoNativeDetailViewDelegate> _delegate;
    ExploreImageCollectionView *_imageCollectionView;
    unsigned long long _maximumVisibleIndex;
    unsigned long long _currentVisibleIndex;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) unsigned long long currentVisibleIndex; // @synthesize currentVisibleIndex=_currentVisibleIndex;
@property(nonatomic) unsigned long long maximumVisibleIndex; // @synthesize maximumVisibleIndex=_maximumVisibleIndex;
@property(retain, nonatomic) ExploreImageCollectionView *imageCollectionView; // @synthesize imageCollectionView=_imageCollectionView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <TTPhotoNativeDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)imageCollectionView:(id)arg1 didScrollToIndex:(long long)arg2 isLastPic:(_Bool)arg3;
- (void)imageCollectionView:(id)arg1 didScrollImagePositionType:(unsigned long long)arg2;
- (void)imageCollectionView:(id)arg1 scrollPercent:(double)arg2;
- (void)imageCollectionView:(id)arg1 imagePositionType:(unsigned long long)arg2 tapOn:(_Bool)arg3;
- (void)imageCollectionView:(id)arg1 didScrollTextView:(id)arg2;
- (void)imageCollectionView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)imageCollectionView:(id)arg1 didChangeNatantVisible:(_Bool)arg2;
- (void)loadAllTypeContent;
- (void)willDisappear;
- (void)willAppear;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;
- (void)dealloc;
- (struct CGRect)currentNativeGalleryImageViewFrame;
- (void)destructSaveImageAlert;
- (void)saveCurrentNativeGalleryIfCould;
- (id)currentNativeGalleryImage;
- (id)currentShowImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

