#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{0, 0}; //will be top left corner of window

  Simple_window win{top_left, 1366, 768, "Exercise #10)"};
  Line_style lst{Line_style::solid, 4};

    Rectangle fltk1(Point{400,10},120,40);
    fltk1.set_fill_color(Color::yellow);
    win.attach(fltk1);

    Rectangle fltk2(Point{406,16},120,40);
    fltk2.set_fill_color(Color::yellow);
    win.attach(fltk2);

    Rectangle fltk3(Point{412,22},120,40);
    fltk3.set_fill_color(Color::yellow);
    win.attach(fltk3);

    Text fltk_txt(Point{418,42},"FLTK headers");
    win.attach(fltk_txt);

    Rectangle win_rect(Point{389,130},166,80);
    win_rect.set_fill_color(Color::yellow);
    win.attach(win_rect);

    Text win_txt0(Point{389,127},"Window.h:");
    win_txt0.set_font(Graph_lib::Font::helvetica_bold);
    win.attach(win_txt0);

    Text win_txt1(Point{395,150},"// window interface:");
    win.attach(win_txt1);

    Text win_txt2(Point{395,170},"class Window {...};");
    win_txt2.set_font(Graph_lib::Font::helvetica_bold);
    win.attach(win_txt2);
    
    Text win_txt3(Point{395,190},"...");
    win.attach(win_txt3);

    Open_polyline win_fltk;
    win_fltk.add(Point{472,130});
    win_fltk.add(Point{472,62});
    win.attach(win_fltk);
    
    Polygon win_fltk_arw;
    win_fltk_arw.add(Point{472,62});
    win_fltk_arw.add(Point{474,67});
    win_fltk_arw.add(Point{470,67});
    win_fltk_arw.set_fill_color(Color::black);
    win.attach(win_fltk_arw);

    // add rest, would be much easier if not everything were passed by reference
    // and would thus stop existing when leaving a scope



  win.wait_for_button();
}
