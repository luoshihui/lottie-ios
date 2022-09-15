#import "LOTPlatformCompat.h"

// From http://github.com/ars/uicolor-utilities
#define CLAMP(val,min,max)    MIN(MAX(val,min),max)

@interface UIColor (UIColor_Expanded)
@property (nonatomic, readonly) CGColorSpaceModel LOT_colorSpaceModel;
@property (nonatomic, readonly) BOOL LOT_canProvideRGBComponents;
@property (nonatomic, readonly) CGFloat LOT_red; // Only valid if canProvideRGBComponents is YES
@property (nonatomic, readonly) CGFloat LOT_green; // Only valid if canProvideRGBComponents is YES
@property (nonatomic, readonly) CGFloat LOT_blue; // Only valid if canProvideRGBComponents is YES
@property (nonatomic, readonly) CGFloat LOT_white; // Only valid if colorSpaceModel == kCGColorSpaceModelMonochrome
@property (nonatomic, readonly) CGFloat LOT_alpha;
@property (nonatomic, readonly) UInt32 LOT_rgbHex;

- (NSString *)LOT_colorSpaceString;

- (NSArray *)LOT_arrayFromRGBAComponents;

- (BOOL)LOT_red:(CGFloat *)r green:(CGFloat *)g blue:(CGFloat *)b alpha:(CGFloat *)a;

- (UIColor *)LOT_colorByLuminanceMapping;

- (UIColor *)LOT_colorByMultiplyingByRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (UIColor *)       LOT_colorByAddingRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (UIColor *) LOT_colorByLighteningToRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (UIColor *)  LOT_colorByDarkeningToRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

- (UIColor *)LOT_colorByMultiplyingBy:(CGFloat)f;
- (UIColor *)       LOT_colorByAdding:(CGFloat)f;
- (UIColor *) LOT_colorByLighteningTo:(CGFloat)f;
- (UIColor *)  LOT_colorByDarkeningTo:(CGFloat)f;

- (UIColor *)LOT_colorByMultiplyingByColor:(UIColor *)color;
- (UIColor *)       LOT_colorByAddingColor:(UIColor *)color;
- (UIColor *) LOT_colorByLighteningToColor:(UIColor *)color;
- (UIColor *)  LOT_colorByDarkeningToColor:(UIColor *)color;

- (NSString *)LOT_stringFromColor;
- (NSString *)LOT_hexStringValue;

+ (UIColor *)LOT_randomColor;
+ (UIColor *)LOT_colorWithString:(NSString *)stringToConvert;
+ (UIColor *)LOT_colorWithRGBHex:(UInt32)hex;
+ (UIColor *)LOT_colorWithHexString:(NSString *)stringToConvert;

+ (UIColor *)LOT_colorWithName:(NSString *)cssColorName;

+ (UIColor *)LOT_colorByLerpingFromColor:(UIColor *)fromColor toColor:(UIColor *)toColor amount:(CGFloat)amount;

@end
