/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSSegmentedCell.h"

@class NSMutableDictionary;

@interface LazyMenuSegmentedCell : NSSegmentedCell
{
    id _lazyMenuBlock;
    NSMutableDictionary *_loadedMenus;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setLazyMenuBlock:(id)arg1;
- (id)menuForSegment:(long long)arg1;

@end
