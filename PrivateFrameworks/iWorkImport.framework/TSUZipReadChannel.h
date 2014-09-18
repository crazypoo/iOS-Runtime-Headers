/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSUReadChannel>, NSObject<OS_dispatch_queue>, NSString, TSUZipArchive, TSUZipEntry;

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {
    TSUZipArchive *_archive;
    <TSUReadChannel> *_archiveReadChannel;
    TSUZipEntry *_entry;
    NSObject<OS_dispatch_queue> *_readQueue;
    bool_validateCRC;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) bool isValid;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithQueue:(id)arg1 handler:(id)arg2 error:(id)arg3;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(bool)arg3;
- (bool)isValid;
- (bool)processData:(id)arg1 CRC:(unsigned int*)arg2 isDone:(bool)arg3 queue:(id)arg4 handler:(id)arg5;
- (bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)readWithFileHeaderLength:(unsigned long long)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (void)setLowWater:(unsigned long long)arg1;

@end