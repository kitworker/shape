//============================================================================
// Name        : cpp_netrino.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstdio>

#include "myshape.h"
#include "shape.h"



using namespace std;

template<class N>
N maxt(N x, N y)
{
	N a = x;
	if (x < y)
		a = y;
	return a;
}



int main() {
	string str("string_my");

	screen_init();
	//shape* fice = new MyClass(point(0, 0), point(10, 10));
	//shape* shlap = new rectangle(point(0, 0), point(10, 10));
	//shape* bee = new Bee(point(0, 0), point(20, 15));
	/*shape* mLine = new line(point(0, 15), 17);*/

	//auto_ptr<shape*> p (&fice);
	//auto_ptr_ref<string> str1 (new string("str") );

	
	shape* p3 = new rectangle(point(0, 0), point(5, 10));
	shape* t3 = new tringle(point(0, 0), point(15, 10),point(0, 15));
	
	stack(t3, p3);

	shape_refresh();
//	while (true)
//	{
//		shape_refresh();
//		//stack(shlap,fice);
//		//stackWE(shlap, fice);
//		stack(fice, bee);
//		stackWE(bee, fice);
//		cout << str;
//		//stackWE(shlap, fice);
//		shape_refresh();
//		cout << str;
//		getchar();
//	}
	
//	stack( shlap,fice);
	//while (true){
	//	stack(*p, mLine); // p) // put p on top of q
	//	shape_refresh();
	//	getchar();
	//	stack(mLine, fice ); // p) // put p on top of q
	//	shape_refresh();
	//	getchar();
	//}
	

//	shape_refresh();

	
	
	screen_end();

	return 0;
}
