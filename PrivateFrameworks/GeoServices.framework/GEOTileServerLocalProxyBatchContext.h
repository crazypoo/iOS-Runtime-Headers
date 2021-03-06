/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxyBatchContext : NSObject {
    GEOTileKeyList *_fullList;
    GEOTileKeyList *_interestList;
    GEOTileKeyList *_networkList;
    GEOTileKeyList *_pendingNetworkList;
    GEOTileRequester *_tileRequester;
}

@property (nonatomic, retain) GEOTileKeyList *fullList;
@property (nonatomic, retain) GEOTileKeyList *interestList;
@property (nonatomic, retain) GEOTileKeyList *networkList;
@property (nonatomic, retain) GEOTileKeyList *pendingNetworkList;
@property (nonatomic, retain) GEOTileRequester *tileRequester;

- (void)dealloc;
- (id)fullList;
- (id)interestList;
- (id)networkList;
- (id)pendingNetworkList;
- (void)setFullList:(id)arg1;
- (void)setInterestList:(id)arg1;
- (void)setNetworkList:(id)arg1;
- (void)setPendingNetworkList:(id)arg1;
- (void)setTileRequester:(id)arg1;
- (id)tileRequester;

@end
