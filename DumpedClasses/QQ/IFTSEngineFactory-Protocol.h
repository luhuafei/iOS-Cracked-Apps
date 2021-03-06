//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IFTSEngineFactory <NSObject>
- (id <IFTSFunctionEngine>)getFTSFunctionEngine;
- (id <IFTSFileEngine>)getFTSFileEngine;
- (id <IFTSFavoriteEngine>)getFTSFavoriteEngine;
- (id <IFTSPublicAccountEngine>)getFTSPublicAccountEngine;
- (id <IFTSMsgEngine>)getFTSMsgEngine;
- (id <IFTSBaseProtocol>)getFTSCreateDiscussGroupEngine;
- (id <IFTSRelationEngine>)getFTSRelationEngine;
@end

