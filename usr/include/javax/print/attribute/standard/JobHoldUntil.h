// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobHoldUntil__
#define __javax_print_attribute_standard_JobHoldUntil__

#pragma interface

#include <javax/print/attribute/DateTimeSyntax.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
          class JobHoldUntil;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobHoldUntil : public ::javax::print::attribute::DateTimeSyntax
{
public:
  JobHoldUntil (::java::util::Date *);
  jboolean equals (::java::lang::Object *);
  ::java::lang::Class *getCategory ();
  ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -1664471048860415024LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_JobHoldUntil__ */
