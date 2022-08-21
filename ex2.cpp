#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{100, 100}; //will be top left corner of window

  Simple_window win{top_left, 600, 400, "Exercise #2"};

  const int x1 = 50;
  const int y1 = 50;

  Rectangle rec1{Point{x1, y1}, 100, 30};

  Text t{Point{x1 + 15, y1 + 23}, "Howdy!"};
  t.set_font_size(20);
  t.set_font(Graph_lib::Font::courier_italic);

  win.attach(rec1);
  win.attach(t);

  win.wait_for_button();
}
