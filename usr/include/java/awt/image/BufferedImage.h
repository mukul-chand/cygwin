// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_BufferedImage__
#define __java_awt_image_BufferedImage__

#pragma interface

#include <java/awt/Image.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Rectangle;
      class Graphics2D;
      class Point;
      namespace image
      {
        class TileObserver;
        class BufferedImage;
        class ImageProducer;
        class SampleModel;
        class ImageObserver;
        class Raster;
        class IndexColorModel;
        class ColorModel;
        class WritableRaster;
      }
    }
  }
}

class java::awt::image::BufferedImage : public ::java::awt::Image
{
public:
  BufferedImage (jint, jint, jint);
  BufferedImage (jint, jint, jint, ::java::awt::image::IndexColorModel *);
  BufferedImage (::java::awt::image::ColorModel *, ::java::awt::image::WritableRaster *, jboolean, ::java::util::Hashtable *);
private:
  void init (::java::awt::image::ColorModel *, ::java::awt::image::WritableRaster *, jboolean, ::java::util::Hashtable *, jint);
public:
  virtual void coerceData (jboolean);
  virtual ::java::awt::image::WritableRaster *copyData (::java::awt::image::WritableRaster *);
  virtual ::java::awt::Graphics2D *createGraphics ();
  virtual void flush () { }
  virtual ::java::awt::image::WritableRaster *getAlphaRaster ();
  virtual ::java::awt::image::ColorModel *getColorModel () { return colorModel; }
  virtual ::java::awt::image::Raster *getData ();
  virtual ::java::awt::image::Raster *getData (::java::awt::Rectangle *);
  virtual ::java::awt::Graphics *getGraphics ();
  virtual jint getHeight ();
  virtual jint getHeight (::java::awt::image::ImageObserver *);
  virtual jint getMinTileX ();
  virtual jint getMinTileY ();
  virtual jint getMinX ();
  virtual jint getMinY ();
  virtual jint getNumXTiles ();
  virtual jint getNumYTiles ();
  virtual ::java::lang::Object *getProperty (::java::lang::String *);
  virtual ::java::lang::Object *getProperty (::java::lang::String *, ::java::awt::image::ImageObserver *);
  virtual JArray< ::java::lang::String *> *getPropertyNames () { return 0; }
  virtual jint getRGB (jint, jint);
  virtual jintArray getRGB (jint, jint, jint, jint, jintArray, jint, jint);
  virtual ::java::awt::image::WritableRaster *getRaster () { return raster; }
  virtual ::java::awt::image::SampleModel *getSampleModel ();
  virtual ::java::awt::image::ImageProducer *getSource ();
  virtual ::java::util::Vector *getSources () { return 0; }
  virtual ::java::awt::image::BufferedImage *getSubimage (jint, jint, jint, jint);
  virtual ::java::awt::image::Raster *getTile (jint, jint);
  virtual jint getTileGridXOffset ();
  virtual jint getTileGridYOffset ();
  virtual jint getTileHeight ();
  virtual jint getTileWidth ();
  virtual jint getType () { return type; }
  virtual jint getWidth ();
  virtual jint getWidth (::java::awt::image::ImageObserver *);
  virtual ::java::awt::image::WritableRaster *getWritableTile (jint, jint);
  virtual JArray< ::java::awt::Point *> *getWritableTileIndices ();
  virtual jboolean hasTileWriters ();
  virtual jboolean isAlphaPremultiplied () { return isPremultiplied; }
  virtual jboolean isTileWritable (jint, jint);
  virtual void releaseWritableTile (jint, jint);
  virtual void setData (::java::awt::image::Raster *);
  virtual void setRGB (jint, jint, jint);
  virtual void setRGB (jint, jint, jint, jint, jintArray, jint, jint);
  virtual ::java::lang::String *toString ();
  virtual void addTileObserver (::java::awt::image::TileObserver *);
  virtual void removeTileObserver (::java::awt::image::TileObserver *);
  static const jint TYPE_CUSTOM = 0L;
  static const jint TYPE_INT_RGB = 1L;
  static const jint TYPE_INT_ARGB = 2L;
  static const jint TYPE_INT_ARGB_PRE = 3L;
  static const jint TYPE_INT_BGR = 4L;
  static const jint TYPE_3BYTE_BGR = 5L;
  static const jint TYPE_4BYTE_ABGR = 6L;
  static const jint TYPE_4BYTE_ABGR_PRE = 7L;
  static const jint TYPE_USHORT_565_RGB = 8L;
  static const jint TYPE_USHORT_555_RGB = 9L;
  static const jint TYPE_BYTE_GRAY = 10L;
  static const jint TYPE_USHORT_GRAY = 11L;
  static const jint TYPE_BYTE_BINARY = 12L;
  static const jint TYPE_BYTE_INDEXED = 13L;
public: // actually package-private
  static jintArray bits3;
  static jintArray bits4;
  static jintArray bits1byte;
  static jintArray bits1ushort;
  static jintArray masks_int;
  static jintArray masks_565;
  static jintArray masks_555;
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::awt::Image )))) observers;
  ::java::awt::image::WritableRaster *raster;
  ::java::awt::image::ColorModel *colorModel;
  ::java::util::Hashtable *properties;
  jboolean isPremultiplied;
  jint type;
private:
  static JArray< ::java::awt::Point *> *tileIndices;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_BufferedImage__ */
