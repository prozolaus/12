#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{400, 100}; //will be top left corner of window

  Simple_window win{top_left, 600, 400, "Exercise #8"};
  Line_style lst{Line_style::solid, 4};

  Circle c1{Point{100, 100}, 50};
  c1.set_color(Color::blue);
  c1.set_style(lst);
  win.attach(c1);

  Circle c2{Point{220, 100}, 50};
  c2.set_color(Color::black);
  c2.set_style(lst);
  win.attach(c2);

  Circle c3{Point{340, 100}, 50};
  c3.set_color(Color::red);
  c3.set_style(lst);
  win.attach(c3);

  Circle c4{Point{160, 150}, 50};
  c4.set_color(Color::yellow);
  c4.set_style(lst);
  win.attach(c4);

  Circle c5{Point{280, 150}, 50};
  c5.set_color(Color::green);
  c5.set_style(lst);
  win.attach(c5);

  win.wait_for_button();
}
