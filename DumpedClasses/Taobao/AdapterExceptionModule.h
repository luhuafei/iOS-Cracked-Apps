//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdapterBaseModule.h"

@class NSDictionary, NSString;

@interface AdapterExceptionModule : AdapterBaseModule
{
    unsigned int thread;
    NSString *exceptionId;
    NSString *exceptionCode;
    NSString *exceptionVersion;
    NSString *exceptionArg1;
    NSString *exceptionArg2;
    NSString *exceptionArg3;
    NSDictionary *exceptionArgs;
    NSString *exceptionDetail;
}

@property(nonatomic) unsigned int thread; // @synthesize thread;
@property(retain, nonatomic) NSString *exceptionDetail; // @synthesize exceptionDetail;
@property(retain, nonatomic) NSDictionary *exceptionArgs; // @synthesize exceptionArgs;
@property(retain, nonatomic) NSString *exceptionArg3; // @synthesize exceptionArg3;
@property(retain, nonatomic) NSString *exceptionArg2; // @synthesize exceptionArg2;
@property(retain, nonatomic) NSString *exceptionArg1; // @synthesize exceptionArg1;
@property(retain, nonatomic) NSString *exceptionVersion; // @synthesize exceptionVersion;
@property(retain, nonatomic) NSString *exceptionCode; // @synthesize exceptionCode;
@property(retain, nonatomic) NSString *exceptionId; // @synthesize exceptionId;
- (void).cxx_destruct;
- (id)init;

@end

