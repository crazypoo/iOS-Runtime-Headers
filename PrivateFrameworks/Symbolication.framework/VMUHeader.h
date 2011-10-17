/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUHeader : NSObject  {
}

+ (id)headerWithUniverse:(id)arg1 memory:(id)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)headerWithMemory:(id)arg1 address:(unsigned long long)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)extractMachOHeadersFromHeader:(id)arg1 matchingArchitecture:(id)arg2 considerArchives:(BOOL)arg3;

- (id)signature;
- (BOOL)isMachO64;
- (BOOL)isFat;
- (BOOL)isMachO32;
- (BOOL)isArchive;
- (BOOL)isMachO;

@end