//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCHomeRouteListModel : JSONModel
{
    NSString<Optional> *_add_route;
    NSString<Optional> *_max_route;
    NSString<Optional> *_sort_op;
    NSString<Optional> *_add_route_url;
    NSString<Optional> *_add_route_desc;
}

@property(copy, nonatomic) NSString<Optional> *add_route_desc; // @synthesize add_route_desc=_add_route_desc;
@property(copy, nonatomic) NSString<Optional> *add_route_url; // @synthesize add_route_url=_add_route_url;
@property(copy, nonatomic) NSString<Optional> *sort_op; // @synthesize sort_op=_sort_op;
@property(copy, nonatomic) NSString<Optional> *max_route; // @synthesize max_route=_max_route;
@property(copy, nonatomic) NSString<Optional> *add_route; // @synthesize add_route=_add_route;
- (void).cxx_destruct;

@end

