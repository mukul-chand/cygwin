// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Button__
#define __java_awt_Button__

#pragma interface

#include <java/awt/Component.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Button;
      class AWTEvent;
      namespace event
      {
        class ActionEvent;
        class ActionListener;
      }
    }
  }
}

class java::awt::Button : public ::java::awt::Component
{
public:
  Button ();
  Button (::java::lang::String *);
  virtual ::java::lang::String *getLabel () { return label; }
  virtual void setLabel (::java::lang::String *);
  virtual ::java::lang::String *getActionCommand () { return actionCommand; }
  virtual void setActionCommand (::java::lang::String *);
  virtual void addActionListener (::java::awt::event::ActionListener *);
  virtual void removeActionListener (::java::awt::event::ActionListener *);
  virtual JArray< ::java::awt::event::ActionListener *> *getActionListeners ();
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual void addNotify ();
public:  // actually protected
  virtual void processEvent (::java::awt::AWTEvent *);
  virtual void processActionEvent (::java::awt::event::ActionEvent *);
public: // actually package-private
  virtual void dispatchEventImpl (::java::awt::AWTEvent *);
public:  // actually protected
  virtual ::java::lang::String *paramString ();
private:
  static const jlong serialVersionUID = -8774683716313001058LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::awt::Component )))) actionCommand;
  ::java::lang::String *label;
  ::java::awt::event::ActionListener *action_listeners;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Button__ */
