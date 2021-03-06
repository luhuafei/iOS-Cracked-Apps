//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface FBDBLUserChooserCollectionViewLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_indexPathsToAnimate;
    double _minimumWidth;
    struct UIEdgeInsets _minimumContentInset;
}

@property(nonatomic) struct UIEdgeInsets minimumContentInset; // @synthesize minimumContentInset=_minimumContentInset;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
- (void).cxx_destruct;
- (void)_updateInsetsToCenterInWidth:(double)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;

@end

