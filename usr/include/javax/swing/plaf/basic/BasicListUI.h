// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicListUI__
#define __javax_swing_plaf_basic_BasicListUI__

#pragma interface

#include <javax/swing/plaf/ListUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JList;
      namespace plaf
      {
        namespace basic
        {
          class BasicListUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Point;
      class Graphics;
      class Dimension;
      class Color;
    }
  }
}

class javax::swing::plaf::basic::BasicListUI : public ::javax::swing::plaf::ListUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual void paintBackground (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual jint locationToIndex (::javax::swing::JList *, ::java::awt::Point *);
  virtual ::java::awt::Point *indexToLocation (::javax::swing::JList *, jint);
  virtual ::java::awt::Rectangle *getCellBounds (::javax::swing::JList *, jint, jint);
  BasicListUI ();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::ListUI ))))  gap_between_cells;
  ::java::awt::Color *textColor;
  ::java::awt::Color *disabledTextColor;
  ::java::awt::Color *pressedBackgroundColor;
  ::java::awt::Color *normalBackgroundColor;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicListUI__ */
