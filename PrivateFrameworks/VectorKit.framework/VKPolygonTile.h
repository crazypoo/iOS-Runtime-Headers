/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonTile : VKVectorTile {
    float _alpha;
    VKAnimation *_animation;
    VKAnimation *_animationForPitch;
    NSMutableArray *_coastlineGroups;
    float _maxLayeringHeight;
    float _minLayeringHeight;
    NSMutableArray *_polygonGroups;
    float _scale;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) VKAnimation *animation;
@property (nonatomic, retain) VKAnimation *animationForPitch;
@property (nonatomic, readonly) NSArray *coastlineGroups;
@property (nonatomic, readonly) float maxLayeringHeight;
@property (nonatomic, readonly) float minLayeringHeight;
@property (nonatomic, readonly) NSArray *polygonGroups;
@property (nonatomic) float scale;

- (float)alpha;
- (id)animation;
- (id)animationForPitch;
- (void)buildCoastlinesWithStyleSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_1_1_3; const void*x_1_1_4; void*x_1_1_5; void*x_1_1_6; int x_1_1_7; in void*x_1_1_8; out unsigned int x_1_1_9/* : ? */; void*x_1_1_10; BOOL x_1_1_11; void*x_1_1_12; } x1; struct _release_objc { } x2; }*)arg1;
- (void)buildMeshesWithStyleSession:(struct StyleResolutionSession<std::__1::vector<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<PolygonKey, geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > > { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_1_1_3; const void*x_1_1_4; void*x_1_1_5; void*x_1_1_6; int x_1_1_7; in void*x_1_1_8; out unsigned int x_1_1_9/* : ? */; void*x_1_1_10; BOOL x_1_1_11; void*x_1_1_12; } x1; struct _release_objc { } x2; }*)arg1 device:(struct Device { int (**x1)(); int x2; }*)arg2 triangulator:(id)arg3 prepareExtrusion:(BOOL)arg4;
- (id)coastlineGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device { int (**x1)(); int x2; }*)arg7;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (id)polygonGroups;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;

@end
