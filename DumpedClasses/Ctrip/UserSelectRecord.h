//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface UserSelectRecord : CTViewModel
{
    NSString *userId;
    NSString *cacheBeanName;
    NSString *itemKey;
    NSString *itemValue;
}

@property(retain, nonatomic) NSString *itemValue; // @synthesize itemValue;
@property(copy, nonatomic) NSString *itemKey; // @synthesize itemKey;
@property(retain, nonatomic) NSString *cacheBeanName; // @synthesize cacheBeanName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

