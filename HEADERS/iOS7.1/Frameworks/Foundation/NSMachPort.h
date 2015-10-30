//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort
{
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;
+ (void)parseMachMessage:(void *)arg1 localPort:(id *)arg2 remotePort:(id *)arg3 msgid:(unsigned int *)arg4 components:(id *)arg5;
+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)port;
+ (void)resetAllPorts;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)handlePortMessage:(id)arg1;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)machPort;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)_cfTypeID;

@end
