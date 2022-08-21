#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{0, 0}; //will be top left corner of window

  Simple_window win{top_left, 1366, 768, "Exercise #6"};

  Polygon poly;
  poly.add(Point{0, -100});
  poly.add(Point{100, 1000});
  poly.add(Point{200, -200});

  win.attach(poly);

  win.wait_for_button();
}
