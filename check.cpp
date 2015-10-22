#include <LEDA/core/list.h>
#include <LEDA/geo/rat_point.h>
#include <LEDA/geo/random_rat_point.h>
#include <LEDA/graphics/window.h>
#include <LEDA/geo/geo_alg.h>

using namespace leda;

int main()
{
  list<rat_point> L;

  random_points_in_square(50,100,L);

  list<rat_point> H=CONVEX_HULL(L);
  
 
  window W;W.init(-110,110,-110); 
  W.open(); W.display();
  W.set_line_width(3);

  rat_point p;  //draw points in L
  forall(p,L) {W.draw_filled_node(p.to_point(),black);}
  W.read_mouse();
  
  //make points of convex hull red and draw edges
  list_item lit;
   

  forall_items(lit,H) {
    rat_point p=H[lit];
    rat_point q=H[H.cyclic_succ(lit)];
    W.draw_filled_node(p.to_point(),red);
    W.draw_edge(p.to_point(),q.to_point(),red);
    W.read_mouse();
  }

  W.screenshot("convex_hull");
 
  return 0;
}	  
