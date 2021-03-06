//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLocationAccessManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBLocationAccessManager, FBUserSession, FBViewerCoordinates, NSArray, NSMutableDictionary, NSString, UITextField;

@interface FBPageCreationAddressTypeaheadHandler : NSObject <FBLocationAccessManagerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    FBUserSession *_session;
    NSMutableDictionary *_citySearchCache;
    NSMutableDictionary *_streetSearchCache;
    NSArray *_citySearchResult;
    NSArray *_streetSearchResult;
    UITextField *_cityInputField;
    UITextField *_streetInputField;
    UITextField *_zipInputField;
    FBViewerCoordinates *_viewerCoordinates;
    FBLocationAccessManager *_locationAccessManager;
    NSString *_cityId;
}

@property(readonly, copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (void)_saveStreetSearchResult:(id)arg1;
- (void)_saveCitySearchResult:(id)arg1;
- (void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2;
- (void)locationAccessManager:(id)arg1 accessGranted:(id)arg2;
- (_Bool)shouldEnableStreetTypeahead;
- (void)setCityInputField:(id)arg1 streetInputField:(id)arg2 zipInputField:(id)arg3;
- (void)fetchStreetSearchResultWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCitySearchResultWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithSession:(id)arg1 defaultCityId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

