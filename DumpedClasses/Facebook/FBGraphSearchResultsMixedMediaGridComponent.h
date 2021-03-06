//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSearchComponentModel, FBSearchResultsContext, NSArray, NSDictionary;

@interface FBGraphSearchResultsMixedMediaGridComponent : CKCompositeComponent
{
    NSArray *_resultEdges;
    FBSearchResultsContext *_context;
    FBSearchComponentModel *_parentModuleEdgeModel;
    NSDictionary *_photoItems;
}

+ (id)newWithResultEdges:(id)arg1 context:(id)arg2 style:(const struct FBGraphSearchResultsMixedMediaGridComponentStyle *)arg3 parentModuleEdgeModel:(id)arg4;
@property(readonly, copy, nonatomic) NSDictionary *photoItems; // @synthesize photoItems=_photoItems;
@property(readonly, nonatomic) FBSearchComponentModel *parentModuleEdgeModel; // @synthesize parentModuleEdgeModel=_parentModuleEdgeModel;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSArray *resultEdges; // @synthesize resultEdges=_resultEdges;
- (void).cxx_destruct;
- (void)didTapSeeMore:(id)arg1;

@end

