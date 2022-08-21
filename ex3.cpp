#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{100, 100}; //will be top left corner of window

  Simple_window win{top_left, 600, 400, "Exercise #3"};

  const int x1 = 50;
  const int y1 = 50;
  const int size = 150;
  Line_style ln_stl{Line_style::solid, 4};

  Open_polyline poly1{
      Point{x1, y1}, Point{x1, y1 + size},
      Point{x1, size / 2 + y1}, Point{x1 + size / 2, size / 2 + y1},
      Point{x1 + size / 2, y1}, Point{x1 + size / 2, y1 + size}};
  poly1.set_style(ln_stl);
  poly1.set_color(Color::blue);
  win.attach(poly1);

  Open_polyline poly2{
      Point{size, y1 + size}, Point{size + x1, y1},
      Point{size + x1 * 2, y1 + size}, Point{size + x1 + (x1 / 2), size / 2 + y1},
      Point{size + x1 / 2, size / 2 + y1}};
  poly2.set_style(ln_stl);
  poly2.set_color(Color::red);
  win.attach(poly2);
  
  /*
  Line_style ln_stl{Line_style::solid, 4};

  Line l1{Point{x1, y1}, Point{x1, y1 + size}};
  Line l2{Point{x1, size / 2 + y1}, Point{x1 + size / 2, size / 2 + y1}};
  Line l3{Point{x1 + size / 2, y1}, Point{x1 + size / 2, y1 + size}};

  Line l4{Point{size, y1 + size}, Point{size + x1, y1}};
  Line l5{Point{size + x1, y1}, Point{size + x1 * 2, y1 + size}};
  Line l6{Point{size + x1 / 2, size / 2 + y1}, Point{size + x1 + (x1 / 2), size / 2 + y1}};

  l1.set_style(ln_stl);
  l2.set_style(ln_stl);
  l3.set_style(ln_stl);
  l4.set_style(ln_stl);
  l5.set_style(ln_stl);
  l6.set_style(ln_stl);

  l1.set_color(Color::blue);
  l2.set_color(Color::blue);
  l3.set_color(Color::blue);
  l4.set_color(Color::red);
  l5.set_color(Color::red);
  l6.set_color(Color::red);

  win.attach(l1);
  win.attach(l2);
  win.attach(l3);
  win.attach(l4);
  win.attach(l5);
  win.attach(l6);
*/
  win.wait_for_button();
}
