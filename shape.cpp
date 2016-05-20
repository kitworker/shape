#include "shape.h"
#include "screen.h"

//shape_lst shape_list;

rectangle::rectangle(point a, point b) {
	if (a.x <= b.x) {
		if (a.y <= b.y) {
			sw = a;
			ne = b;
		}
		else {
			sw = point(a.x, b.y);
			ne = point(b.x, a.y);
		}
	}
	else {
		if (a.y <= b.y) {
			sw = point(b.x, a.y);
			ne = point(a.x, b.y);
		}
		else {
			sw = b;
			ne = a;
		}
	}
}

tringle::tringle(point t1, point t2, point t3)
{
	n = t1;
	w = t2;
	e = t3;

}


void rectangle::draw()
{
	/*
	nw ---- n ---- ne
	|               |
	|               |
	w       m       e
	|               |
	|               |
	sw ---- s ---- se
	*/
    point nw(sw.x, ne.y);
    point se(ne.x, sw.y);
    put_line(nw,ne);
    put_line(ne,se);
    put_line(se,sw);
    put_line(sw,nw);
}

void tringle::draw()
{
	/*
	nw ---- n ---- ne
	|     /   \     |
	|   /       \   |
	w /     m     \ e
	------------------

	sw ---- s ---- se
	*/
    put_line(n,e);
    put_line(e,w);
    put_line(w,n);
}


shape* shape::list = new shape();
void shape_refresh()
{
    screen_clear();

	//shape* p = shape::list;
	//while (p = p->next) p->draw(); 

	for (shape* p = shape::list; p; p=p->next) p->draw();

    screen_refresh();
}
/*
nw ---- n ---- ne
|               |
|               |
w       m       e
|               |
|               |
sw ---- s ---- se
*/
void stack(shape* down_mov, shape* up) // put p on top of q
{
	static int delt = 1;
    point n_up = up->north();
    point s_down = down_mov->south();
	down_mov->move(n_up.x - s_down.x , n_up.y - s_down.y );
	//down_mov->move(delt % 2 ? 2 : -2, delt % 2 ? 3 : -3);
	delt++ ;
}

void stackWE(shape* down_mov, shape* up) // put p on top of q
{
	static int delt = 1;
	point n_up = up->east();
	point s_down = down_mov->west();
	down_mov->move(n_up.x - s_down.x, n_up.y - s_down.y);
	//down_mov->move(delt % 2 ? 2 : -2, delt % 2 ? 3 : -3);
	delt++;
}
