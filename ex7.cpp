#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{400, 100}; //will be top left corner of window

  const int cell = 15 * 3;
  Simple_window win{top_left, cell * 11, cell * 8, "Exercise #7"};
  Line_style lst{Line_style::solid, 2};

  Rectangle tube{Point{cell * 7, cell}, cell / 2, cell * 2};
  tube.set_fill_color(Color::dark_blue);
  win.attach(tube);

  Function smoke{sin, 0, 10, Point{cell * 7 + cell / 4, cell}};
  smoke.set_style(Line_style(Line_style::solid,5));
  win.attach(smoke);

  Rectangle wall{Point{cell * 2, cell * 3}, cell * 7, cell * 3};
  wall.set_style(lst);
  wall.set_fill_color(Color::white);
  win.attach(wall);

  Polygon roof{Point{cell * 2, cell * 3}, Point{cell * 2 + cell * 7 / 2, cell}, Point{cell * 9, cell * 3}};
  roof.set_style(lst);
  roof.set_fill_color(Color::visible);
  win.attach(roof);

  Rectangle door{Point{cell * 3, cell * 4}, cell, cell * 2};
  door.set_style(lst);
  door.set_fill_color(Color::dark_yellow);
  win.attach(door);

  Rectangle window1{Point{cell * 5, cell * 4}, cell, cell};
  window1.set_style(lst);
  window1.set_fill_color(Color::yellow);
  win.attach(window1);

  Rectangle window2{Point{cell * 7, cell * 4}, cell, cell};
  window2.set_style(lst);
  window2.set_fill_color(Color::yellow);
  win.attach(window2);

  win.wait_for_button();
}
