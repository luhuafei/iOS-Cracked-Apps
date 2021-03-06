//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSURL, TBJSONModel;

@interface TBHTTPURLResponse : NSObject
{
    NSURL *_URL;
    NSDictionary *_headerFields;
    NSError *_error;
    NSData *_responseData;
    NSDictionary *_perfStat;
    TBJSONModel *_responseJSONModel;
}

@property(retain, nonatomic) TBJSONModel *responseJSONModel; // @synthesize responseJSONModel=_responseJSONModel;
@property(retain, nonatomic) NSDictionary *perfStat; // @synthesize perfStat=_perfStat;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)responseJSON;
- (id)responseStringWithEncoding:(unsigned long long)arg1;
- (id)responseString;
@property(readonly, nonatomic) unsigned long long responseEncoding;
- (id)initWithURL:(id)arg1 headerFields:(id)arg2 responseData:(id)arg3 error:(id)arg4;

@end

