//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (DestEx)
- (struct CGSize)destSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)destSizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)destSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)destSizeWithFont:(id)arg1;
- (struct CGSize)dest_customSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (double)dest_stringHeight:(double)arg1 fontSizeHeight:(id)arg2;
- (double)dest_stringWidth:(double)arg1 fontSizeWidth:(id)arg2;
- (struct CGSize)dest_stringSize:(double)arg1 fontSize:(id)arg2;
- (_Bool)dest_isEmpty;
- (id)dest_trimmedString;
- (struct CGSize)boundingRectWithSize:(struct CGSize)arg1 withTextFont:(id)arg2 withLineSpacing:(double)arg3;
- (id)attributedStringFromStingWithFont:(id)arg1 withLineSpacing:(double)arg2;
@end
