// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RMIClassLoader__
#define __java_rmi_server_RMIClassLoader__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class RMIClassLoader;
        class RMIClassLoader$MyClassLoader;
      }
    }
    namespace net
    {
      class URL;
    }
  }
}

class java::rmi::server::RMIClassLoader : public ::java::lang::Object
{
public:
  static ::java::lang::Class *loadClass (::java::lang::String *);
  static ::java::lang::Class *loadClass (::java::lang::String *, ::java::lang::String *);
private:
  static ::java::lang::ClassLoader *getClassLoader (::java::lang::String *);
public:
  static ::java::lang::String *getClassAnnotation (::java::lang::Class *);
  static ::java::lang::Object *getSecurityContext (::java::lang::ClassLoader *);
  RMIClassLoader ();
private:
  static ::java::util::Map *cacheLoaders;
  static ::java::util::Map *cacheAnnotations;
  static ::java::lang::String *defaultAnnotation;
  static ::java::net::URL *defaultCodebase;
  static ::java::rmi::server::RMIClassLoader$MyClassLoader *defaultLoader;

  friend class java_rmi_server_RMIClassLoader$CacheKey;
  friend class java_rmi_server_RMIClassLoader$MyClassLoader;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_RMIClassLoader__ */
