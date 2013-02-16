// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_CharBuffer__
#define __java_nio_CharBuffer__

#pragma interface

#include <java/nio/Buffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class ByteOrder;
      class CharBuffer;
    }
  }
}

class java::nio::CharBuffer : public ::java::nio::Buffer
{
public: // actually package-private
  CharBuffer (jint, jint, jint, jint);
  CharBuffer (jcharArray, jint, jint, jint, jint, jint);
public:
  static ::java::nio::CharBuffer *allocate (jint);
  static ::java::nio::CharBuffer *wrap (jcharArray, jint, jint);
  static ::java::nio::CharBuffer *wrap (::java::lang::CharSequence *);
  static ::java::nio::CharBuffer *wrap (::java::lang::CharSequence *, jint, jint);
  static ::java::nio::CharBuffer *wrap (jcharArray);
  virtual ::java::nio::CharBuffer *get (jcharArray, jint, jint);
  virtual ::java::nio::CharBuffer *get (jcharArray);
  virtual ::java::nio::CharBuffer *put (::java::nio::CharBuffer *);
  virtual ::java::nio::CharBuffer *put (jcharArray, jint, jint);
  ::java::nio::CharBuffer *put (jcharArray);
  jboolean hasArray ();
  jcharArray array ();
  jint arrayOffset ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint compareTo (::java::lang::Object *);
  virtual ::java::nio::ByteOrder *order () = 0;
  virtual jchar get () = 0;
  virtual ::java::nio::CharBuffer *put (jchar) = 0;
  virtual jchar get (jint) = 0;
  virtual ::java::nio::CharBuffer *put (jint, jchar) = 0;
  virtual ::java::nio::CharBuffer *compact () = 0;
  virtual jboolean isDirect () = 0;
  virtual ::java::nio::CharBuffer *slice () = 0;
  virtual ::java::nio::CharBuffer *duplicate () = 0;
  virtual ::java::nio::CharBuffer *asReadOnlyBuffer () = 0;
  virtual ::java::lang::String *toString ();
  jint length ();
  virtual ::java::lang::CharSequence *subSequence (jint, jint) = 0;
  virtual ::java::nio::CharBuffer *put (::java::lang::String *, jint, jint);
  ::java::nio::CharBuffer *put (::java::lang::String *);
  jchar charAt (jint);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::nio::Buffer ))))  array_offset;
  jcharArray backing_buffer;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_CharBuffer__ */
