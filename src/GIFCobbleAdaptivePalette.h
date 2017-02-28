/*
Copyright (c) 2016 Carl Sherrell

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


#import "GIFCobblePalette.h"
#import <UIKit/UIImage.h>

//
// Implements Median Cut algorithm on the given image
// to construct a palette of specified size.
//
// https://en.wikipedia.org/wiki/Median_cut
//
 
typedef NS_ENUM(UInt8, GIFCobbleAdaptivePaletteSize) {
  kGIFCobbleAdaptivePaletteSize4 = 2,
  kGIFCobbleAdaptivePaletteSize8 = 3,
  kGIFCobbleAdaptivePaletteSize16 = 4,
  kGIFCobbleAdaptivePaletteSize32 = 5,
  kGIFCobbleAdaptivePaletteSize64 = 6,
  kGIFCobbleAdaptivePaletteSize128 = 7,
  kGIFCobbleAdaptivePaletteSize256 = 8
};

@interface GIFCobbleAdaptivePalette : GIFCobblePalette <NSCoding>

- (id) initWithImage:(UIImage *)imageToSample paletteSize:(GIFCobbleAdaptivePaletteSize)pSize includeTransparentColor:(BOOL)includeTransparentColor;

@end
