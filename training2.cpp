#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{100, 100}; //will be top left corner of window

  Simple_window win{top_left, 600, 400, "Canvas"};

  Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};
  win.attach(xa);

  Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
  ya.set_color(Color::dark_cyan);
  ya.label.set_color(Color::dark_red);
  win.attach(ya);

  Function sine{sin, 0, 100, Point{20, 150}, 1000, 50, 50};
  win.attach(sine);

  sine.set_color(Color::blue);

  Polygon poly; //make a shape a polygon

  poly.add(Point{300, 200});
  poly.add(Point{350, 100});
  poly.add(Point{400, 200});

  poly.set_color(Color::red);
  //poly.set_style(Line_style::dash);
  poly.set_style(Line_style(Line_style::dash, 4));
  poly.set_fill_color(Color::white);

  win.attach(poly);

  Rectangle r{Point{200, 200}, 100, 50};
  win.attach(r);

  Closed_polyline poly_rect;
  poly_rect.add(Point{100, 50});
  poly_rect.add(Point{200, 50});
  poly_rect.add(Point{200, 100});
  poly_rect.add(Point{100, 100});
  poly_rect.add(Point{50, 75});
  win.attach(poly_rect);

  r.set_fill_color(Color::yellow);
  poly_rect.set_style(Line_style(Line_style::dash, 2));
  poly_rect.set_fill_color(Color::green);

  Text t{Point{100, 150}, "Hello, my graphical world!"};
  t.set_font(Graph_lib::Font::times_bold);
  t.set_font_size(20);
  win.attach(t);

  Image ii{Point{100, 50}, "image.jpg"};
  ii.move(100, 200);
  win.attach(ii);

  Circle c{Point{100, 200}, 50};
  win.attach(c);

  Ellipse e{Point{100, 200}, 75, 25};
  e.set_color(Color::dark_red);
  win.attach(e);

  Mark m{Point{100, 200}, 'x'};
  win.attach(m);

  ostringstream oss;
  oss << "screen size: " << x_max() << "*" << y_max()
      << "; window size: " << win.x_max() << "*" << win.y_max();
  Text sizes{Point{100, 20}, oss.str()};
  win.attach(sizes);

  Image cal{Point{225, 225}, "snow_cpp.gif"};
  cal.set_mask(Point{40, 40}, 200, 150);
  win.attach(cal);

  win.wait_for_button();
}
