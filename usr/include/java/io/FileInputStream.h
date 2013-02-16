// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_FileInputStream__
#define __java_io_FileInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class FileChannel;
      }
    }
  }
}

class java::io::FileInputStream : public ::java::io::InputStream
{
public:
  FileInputStream (::java::lang::String *);
  FileInputStream (::java::io::File *);
  FileInputStream (::java::io::FileDescriptor *);
  virtual jint available ();
  virtual void close ();
public:  // actually protected
  virtual void finalize () { }
public:
  ::java::io::FileDescriptor *getFD ();
  virtual jint read ();
  virtual jint read (jbyteArray);
  virtual jint read (jbyteArray, jint, jint);
  virtual jlong skip (jlong);
  virtual ::java::nio::channels::FileChannel *getChannel ();
private:
  ::java::io::FileDescriptor * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) fd;
  ::java::nio::channels::FileChannel *ch;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_FileInputStream__ */
