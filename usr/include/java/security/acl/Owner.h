// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_acl_Owner__
#define __java_security_acl_Owner__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace acl
      {
        class Owner;
      }
      class Principal;
    }
  }
}

class java::security::acl::Owner : public ::java::lang::Object
{
public:
  virtual jboolean addOwner (::java::security::Principal *, ::java::security::Principal *) = 0;
  virtual jboolean deleteOwner (::java::security::Principal *, ::java::security::Principal *) = 0;
  virtual jboolean isOwner (::java::security::Principal *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_acl_Owner__ */
