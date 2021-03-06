/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImageCanvas : GGLImageCanvas <VKAnimationRunner, VKWorldDelegate> {
    VKCamera *_camera;
    VKDispatch *_dispatch;
    double _frameTimestamp;
    VKLayoutContext *_layoutContext;
    VKTimer *_layoutTimer;
    struct MapCamera { 
        struct View {} *_view; 
        struct Viewport {} *_viewport; 
        void *_layoutContext; 
    } _mapCamera;
    struct RenderTree { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; oneway void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; long long x20; void*x21; void*x22; short x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; unsigned char x53; void*x54; void*x55; void*x56; void*x57; void*x58; in void*x59; in void*x60; void*x61; void*x62; long x63; void*x64; void*x65; void*x66; in void*x67; int x68; void*x69; float x70; void*x71; out void*x72; const void*x73; void*x74; void*x75; long doublex76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; struct x86; void*x87; } *_mapScene;
    BOOL _needsLayout;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    } _renderQueue;
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { 
        struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    } _renderQueueResolve;
    BOOL _shouldDrawWhileLoading;
    VKWorld *_world;
    struct unique_ptr<<anonymous>::YFlipPass, std::__1::default_delete<<anonymous>::YFlipPass> > { 
        struct __compressed_pair<<anonymous>::YFlipPass *, std::__1::default_delete<<anonymous>::YFlipPass> > { 
            struct YFlipPass {} *__first_; 
        } __ptr_; 
    } _yFlipPass;
}

@property (nonatomic, readonly) VKCamera *camera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKDispatch *dispatch;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VKWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_spinScene:(id)arg1;
- (void)_spinSceneWillRender:(BOOL)arg1;
- (void)_updateViewTransform;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)camera;
- (void)cancelLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id)dispatch;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 useMultisampling:(BOOL)arg3 device:(const struct shared_ptr<ggl::Device> { }*)arg4;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 useMultisampling:(BOOL)arg3 device:(const struct shared_ptr<ggl::Device> { }*)arg4 homeQueue:(id)arg5;
- (void)loadScene;
- (void)renderSceneWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; bool x5; float x6; }*)arg1 completion:(id /* block */)arg2;
- (void)runAnimation:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end
