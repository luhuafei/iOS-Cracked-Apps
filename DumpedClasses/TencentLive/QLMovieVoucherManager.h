//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, QLASIHTTPRequest;

@interface QLMovieVoucherManager : NSObject
{
    _Bool _needDelayUpdate;
    long long _leftNum;
    NSDate *_lastUpdatedDate;
    QLASIHTTPRequest *_vocherListRequest;
    QLASIHTTPRequest *_payRequest;
    QLASIHTTPRequest *_visitorVocherRequest;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QLASIHTTPRequest *visitorVocherRequest; // @synthesize visitorVocherRequest=_visitorVocherRequest;
@property(retain, nonatomic) QLASIHTTPRequest *payRequest; // @synthesize payRequest=_payRequest;
@property(retain, nonatomic) QLASIHTTPRequest *vocherListRequest; // @synthesize vocherListRequest=_vocherListRequest;
@property(nonatomic) _Bool needDelayUpdate; // @synthesize needDelayUpdate=_needDelayUpdate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(nonatomic) long long leftNum; // @synthesize leftNum=_leftNum;
- (void).cxx_destruct;
- (void)requestDidRetryRequest:(id)arg1;
- (void)makeVisitorVocherRequest:(long long)arg1;
- (void)paySingleMovie:(id)arg1 from:(unsigned long long)arg2;
- (void)paySingleMovie:(id)arg1;
- (void)enumModuleVisotorVoucherRequest:(id)arg1;
- (void)enumModulePayWithVoucherRequest:(id)arg1;
- (void)enumModulePayGetVoucherListRequest:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)resetVocherListInfo;
- (void)retryWithLocalFailedRequest:(int)arg1;
- (void)update;
- (void)clear;
- (void)vipStateChange:(id)arg1;
- (void)loginStateChange:(id)arg1;
- (void)updateWithDelay;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (void)dealloc;

@end

