#include "Simple_window.h"
#include "Graph.h"

vector<Point> coordinates(const Point c, const int n)
{
  vector<Point> vp;
  double R = 100, angle;

  if (n >= 3 && n <= 8)
  {
    for (int i = 3; i < n;)
    {
      i++;
      R *= tan(M_PI / i) / sin(M_PI / i);
    }

    for (int i = 0; i < n; i++)
    {
      angle = 2 * M_PI / n * i;
      vp.push_back(Point{int(R * cos(angle) + c.x), int(R * sin(angle) + c.y)});
    }
  }
  else
    error("Wrong n!");
  return vp;
}

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{0, 0}; //will be top left corner of window

  Simple_window win{top_left, 1366, 768, "Exercise #11"};
  Line_style lst{Line_style::solid, 4};
  Point center{650, 350};
  /*
  Circle c1{center, 50};
  win.attach(c1);

  Circle c2{center, 100};
  win.attach(c2);

  Circle c3{center, 141};
  win.attach(c3);

  Circle c4{center, 175};
  win.attach(c4);
*/

  Polygon triangle;
  int n = 3;
  vector<Point> v3 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    triangle.add(v3[i]);

  triangle.set_color(Color::blue);
  triangle.set_style(lst);
  win.attach(triangle);

  Polygon rec;
  n = 4;
  vector<Point> v4 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    rec.add(v4[i]);
  rec.set_color(Color::dark_green);
  rec.set_style(lst);
  win.attach(rec);

  Polygon pentagon;
  n = 5;
  vector<Point> v5 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    pentagon.add(v5[i]);
  pentagon.set_color(Color::yellow);
  pentagon.set_style(lst);
  win.attach(pentagon);

  Polygon hexagon;
  n = 6;
  vector<Point> v6 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    hexagon.add(v6[i]);
  hexagon.set_color(Color::red);
  hexagon.set_style(lst);
  win.attach(hexagon);

  Polygon heptagon;
  n = 7;
  vector<Point> v7 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    heptagon.add(v7[i]);
  heptagon.set_color(Color::magenta);
  heptagon.set_style(lst);
  win.attach(heptagon);

  Polygon octagon;
  n = 8;
  vector<Point> v8 = coordinates(center, n);
  for (int i = 0; i < n; i++)
    octagon.add(v8[i]);
  octagon.set_color(Color::dark_cyan);
  octagon.set_style(lst);
  win.attach(octagon);

  win.wait_for_button();
}