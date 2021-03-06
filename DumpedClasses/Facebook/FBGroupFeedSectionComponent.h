//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCompositeSectionComponent.h>

@class FBGraphQLConnectionSectionComponentListenerAnnouncer, FBGroupFeedVisibleUnitsManager, FBGroupToolbox, FBOptimisticPostingSectionComponentListenerAnnouncer, NSString;

@interface FBGroupFeedSectionComponent : FBCompositeSectionComponent
{
    FBGroupToolbox *_toolbox;
    NSString *_targetID;
    FBGraphQLConnectionSectionComponentListenerAnnouncer *_graphQLConnectionAnnouncer;
    FBOptimisticPostingSectionComponentListenerAnnouncer *_optimisticPostingAnnouncer;
    FBGroupFeedVisibleUnitsManager *_visibleUnitsManager;
}

+ (id)newWithInitialPage:(id)arg1 toolbox:(id)arg2;
@property(retain, nonatomic) FBGroupFeedVisibleUnitsManager *visibleUnitsManager; // @synthesize visibleUnitsManager=_visibleUnitsManager;
@property(readonly, nonatomic) FBOptimisticPostingSectionComponentListenerAnnouncer *optimisticPostingAnnouncer; // @synthesize optimisticPostingAnnouncer=_optimisticPostingAnnouncer;
@property(readonly, nonatomic) FBGraphQLConnectionSectionComponentListenerAnnouncer *graphQLConnectionAnnouncer; // @synthesize graphQLConnectionAnnouncer=_graphQLConnectionAnnouncer;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, nonatomic) FBGroupToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;

@end

