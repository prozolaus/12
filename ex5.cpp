#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{50, 50}; //will be top left corner of window

  Simple_window win{top_left, 1200, 600, "Exercise #5"};

  const int height = 1366;
  const int width = 768;

  Rectangle r{Point{50, 50}, height * 3 / 4, width * 2 / 3};
  r.set_color(Color::red);
  r.set_style(Line_style(Line_style::solid, 22));
  win.attach(r);
  win.wait_for_button();
}
