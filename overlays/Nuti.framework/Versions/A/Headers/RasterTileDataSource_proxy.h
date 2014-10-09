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


#import "MapTile_proxy.h"
#import "RasterTileBitmap_proxy.h"
#import "TileDataSource_proxy.h"

/**
 * Abstract base class for raster tile data sources.
 */
@interface NTRasterTileDataSource : NTTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an abstract RasterTileDataSource object.<br>
 * @param minZoom The minimum zoom level supported by this data source.<br>
 * @param maxZoom The maximum zoom level supported by this data source.
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom;
/**
 * Loads the specified raster tile.<br>
 * @param tile The tile to load.<br>
 * @return The raster tile bitmap containing the tile image. If the tile is not available, null may be returned.
 */
-(NTRasterTileBitmap*)loadTile: (NTMapTile*)tile;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
