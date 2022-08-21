#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{400, 50}; //will be top left corner of window

  Simple_window win{top_left, 600, 600, "Exercise #4"};

  const int size = 100;

  Rectangle r1{Point{size, size}, size, size};
  r1.set_fill_color(Color::white);
  win.attach(r1);
  
  Rectangle r2{Point{size*2, size}, size, size};
  r2.set_fill_color(Color::red);
  win.attach(r2);
  
  Rectangle r3{Point{size*3, size}, size, size};
  r3.set_fill_color(Color::white);
  win.attach(r3);

  Rectangle r4{Point{size, size*2}, size, size};
  r4.set_fill_color(Color::red);
  win.attach(r4);
  
  Rectangle r5{Point{size*2, size*2}, size, size};
  r5.set_fill_color(Color::white);
  win.attach(r5);
  
  Rectangle r6{Point{size*3, size*2}, size, size};
  r6.set_fill_color(Color::red);
  win.attach(r6);

  Rectangle r7{Point{size, size*3}, size, size};
  r7.set_fill_color(Color::white);
  win.attach(r7);
  
  Rectangle r8{Point{size*2, size*3}, size, size};
  r8.set_fill_color(Color::red);
  win.attach(r8);
  
  Rectangle r9{Point{size*3, size*3}, size, size};
  r9.set_fill_color(Color::white);
  win.attach(r9);

  win.wait_for_button();
}
