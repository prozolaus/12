#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{100, 100}; //will be top left corner of window

  Simple_window win{top_left, 600, 400, "Exercise #1"};

  Rectangle rec1{Point{50, 50}, Point{100, 100}};
  Rectangle rec2{Point{150, 150}, 50, 50};
  Polygon rec3;
  rec3.add(Point{250, 250});
  rec3.add(Point{250, 300});
  rec3.add(Point{300, 300});
  rec3.add(Point{300, 250});

  Polygon rec4{Point{150, 50}, Point{200, 50}, Point{200, 100}, Point{150, 100}};

  rec1.set_color(Color::blue);
  rec2.set_color(Color::dark_blue);
  rec3.set_color(Color::red);

  win.attach(rec1);
  win.attach(rec2);
  win.attach(rec3);
  win.attach(rec4);

  win.wait_for_button();
}
