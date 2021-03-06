/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "Bitmap_proxy.h"
#import <UIKit/UIKit.h>

/**
 * A helper class for converting Bitmaps to UIImages an vice versa.
 */
@interface NTBitmapUtils : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Creates a new Bitmap object from an existing UIImage.<br>
 * @param image The reference UIImage.
 */
+(NTBitmap*)createBitmapFromUIImage: (UIImage*)image;
/**
 * Creates a new Bitmap object from an existing UIImage. If the power of two conversion flag is set,<br>
 * additional padding will be added to the image to make it's dimensions power of two.<br>
 * @param image The reference UIImage.<br>
 * @param pow2Padding The power of two conversion flag.
 */
+(NTBitmap*)createBitmapFromUIImage: (UIImage*)image pow2Padding: (BOOL)pow2Padding;
/**
 * Creates a new UIImage object from an existing Bitmap.<br>
 * @return The UIImage.
 */
+(UIImage*)createUIImageFromBitmap: (NTBitmap*)bitmap;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

