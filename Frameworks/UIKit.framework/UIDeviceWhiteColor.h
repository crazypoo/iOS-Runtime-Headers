/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceWhiteColor : UIColor  {
    float whiteComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
}


- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (float)alphaComponent;
- (void)setStroke;
- (void)setFill;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (struct CGColor { }*)CGColor;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (void)set;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end