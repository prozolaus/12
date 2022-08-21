#include "Simple_window.h"
#include "Graph.h"

int sgn(double d)
{
  if (d < 0)
    return -1;
  else if (d == 0)
    return 0;
  else
    return 1;
}

vector<Point> coordinates(double a, double b, double m, double n, int N, Point c)
{
  vector<Point> vp;
  double angle;
  int x, y, tempx = 0, tempy = 0;
  for (int i = 0; i < N; i++)
  {
    angle = 2 * M_PI * i / N;
    x = pow(abs(cos(angle)), (2 / m)) * a * sgn(cos(angle));
    y = pow(abs(sin(angle)), (2 / n)) * b * sgn(sin(angle));
    if (tempx == x && tempy == y)
      continue;
    tempx = x;
    tempy = y;
    vp.push_back(Point{x + c.x, y + c.y});
  }
  return vp;
}

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{0, 0}; //will be top left corner of window

  const int height = 1366;
  const int width = 768;
  Simple_window win{top_left, height, width, "Exercise #12"};
  Line_style lst{Line_style::solid, 2};
  Point center{650, 350};

  for (double i = 0.1; i < 3; i += 0.05)
  {
    vector<Point> vp = coordinates(300, 300, i, i, 200, center);
    Closed_polyline poly;
    for (Point p : vp)
      poly.add(p);
    poly.set_color(Color::blue);
    poly.set_style(lst);
    win.attach(poly);
    Text t{Point{50,50},"m = n = " + to_string(i)};
    win.attach(t);
    win.wait_for_button();
  }
}