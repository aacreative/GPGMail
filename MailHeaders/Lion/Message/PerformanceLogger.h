/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSMutableDictionary, NSSet;

@interface PerformanceLogger : NSObject
{
    long long _performanceLoggerMode;
    NSSet *_enabledTests;
    NSMutableDictionary *_startTimes;
    NSMutableDictionary *_startMemories;
    NSMutableDictionary *_timeDeltas;
    NSMutableDictionary *_memoryDeltas;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLogger;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)overrideMode:(long long)arg1;
- (id)timeDeltas;
- (id)memoryDeltas;
- (void)_addNumber:(double)arg1 withIdentifier:(id)arg2 toTest:(id)arg3 inDictionary:(id)arg4;
- (void)_addStartTime:(double)arg1 withIdentifier:(id)arg2 toTest:(id)arg3;
- (void)_addStartMemory:(double)arg1 withIdentifier:(id)arg2 toTest:(id)arg3;
- (void)_addTimeDelta:(double)arg1 withIdentifier:(id)arg2 toTest:(id)arg3;
- (void)_addMemoryDelta:(double)arg1 withIdentifier:(id)arg2 toTest:(id)arg3;
- (void)_startLoggingTimeForTest:(id)arg1 withIdentifier:(id)arg2;
- (void)_startLoggingMemoryForTest:(id)arg1 withIdentifier:(id)arg2;
- (id)_findMatchingTuple:(id)arg1 identifier:(id)arg2;
- (void)_stopLoggingTimeForTest:(id)arg1 withIdentifier:(id)arg2;
- (void)_stopLoggingMemoryForTest:(id)arg1 withIdentifier:(id)arg2;
- (long long)_getProcessMallocedMemory;
- (void)startLoggingTest:(id)arg1 withIdentifier:(id)arg2;
- (void)stopLoggingTest:(id)arg1 withIdentifier:(id)arg2;
- (void)clearPerformanceResults;
- (void)logPerformanceResults;

@end

