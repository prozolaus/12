#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{0, 0}; //will be top left corner of window

  Simple_window win{top_left, 1366, 768, "Max (ex.#9)"};
  Line_style lst{Line_style::solid, 4};

  Image img{Point{550, 50}, "Max.jpg"};
  img.set_mask(Point{350,100},400,600);
  win.attach(img);

  Text t{Point{750, 40},"Max"};
  win.attach(t);

  win.wait_for_button();
}
