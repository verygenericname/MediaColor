// Taken from Velvet Source https://github.com/NoisyFlake/Velvet/blob/master/sources/ColorSupport.h

#import <UIKit/UIKit.h>

@interface RGBPixel : NSObject
@property int r, g, b, d;
@end

@interface UIImage (VelvetColorSupport)
- (UIColor *)velvetDominantColor;
- (int)colourDistance:(RGBPixel *)a andB:(RGBPixel *)b;
- (UIColor *)velvetAverageColor;
@end

@interface UIColor (VelvetColorSupport)
- (CGFloat)velvetColorBrightness;
+ (UIColor *)velvetColorFromHexString:(NSString *)hexString;
- (BOOL)velvetIsDarkColor;
@end
