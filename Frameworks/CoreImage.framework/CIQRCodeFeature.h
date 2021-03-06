/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeFeature : CIFeature {
    struct CGPoint { 
        float x; 
        float y; 
    } bottomLeft;
    struct CGPoint { 
        float x; 
        float y; 
    } bottomRight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    NSString *messageString;
    struct CGPoint { 
        float x; 
        float y; 
    } topLeft;
    struct CGPoint { 
        float x; 
        float y; 
    } topRight;
}

@property struct CGPoint { float x1; float x2; } bottomLeft;
@property struct CGPoint { float x1; float x2; } bottomRight;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (copy) NSString *messageString;
@property struct CGPoint { float x1; float x2; } topLeft;
@property struct CGPoint { float x1; float x2; } topRight;

+ (id)barcodeFeatureWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)barcodeFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2;

- (id).cxx_construct;
- (struct CGPoint { float x1; float x2; })bottomLeft;
- (struct CGPoint { float x1; float x2; })bottomRight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 topLeft:(struct CGPoint { float x1; float x2; })arg2 topRight:(struct CGPoint { float x1; float x2; })arg3 bottomLeft:(struct CGPoint { float x1; float x2; })arg4 bottomRight:(struct CGPoint { float x1; float x2; })arg5 messageString:(id)arg6;
- (id)messageString;
- (void)setBottomLeft:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBottomRight:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMessageString:(id)arg1;
- (void)setTopLeft:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTopRight:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })topLeft;
- (struct CGPoint { float x1; float x2; })topRight;
- (id)type;

@end
