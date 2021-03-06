//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TBSearchBaseCell.h"

@class NSIndexPath, NSString, TBXSearchService;

@interface TBSearchBaseCell : UICollectionViewCell <TBSearchBaseCell>
{
    int _layoutStyle;
    NSIndexPath *_indexPath;
    TBXSearchService *_xSearchService;
    id <TBSearchBaseCellContainer> _container;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id <TBSearchBaseCellContainer> container; // @synthesize container=_container;
@property(nonatomic) __weak TBXSearchService *xSearchService; // @synthesize xSearchService=_xSearchService;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)resetWithExtInfo:(id)arg1;
- (void)didSelect;
- (void)hideMask;
- (void)render;
- (void)adjustViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id model; // @dynamic model;
@property(readonly) Class superclass;

@end

