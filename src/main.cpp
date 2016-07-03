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

template <class C>
class ArrayMy {
public:
	ArrayMy(C);

};

template<typename T>
ArrayMy<T>::ArrayMy(T){

}


class wgtT {

public:
	int ABNx;
	//template<class C>
	class UserPar {
		UserPar *x11;
	public:
		UserPar(/*int &_x*/){
			//_x = 10;
			//x11 = new UserPar();
		}

	};


	//template<class D>
	UserPar * Par;

	wgtT (int *x)
	{
		Par = new UserPar();
	//	UserPar * Par = new UserPar(x);
	}



};



//wgtT UserWgt [] = {
//		{	10, new UserWgt.
//};

//class userType{
//	int ABN;
//	int *wgt;
//};
//wgtT<int> mywgtT;
//wgtT<userType> myArrUserT;
//
//template <class T>
//struct arrWgtsTs{
//	wgtT<T> inarrWgt[];
//};

//arrWgtsTs<int> myArrWgtsTs;

template <class T>
class UserPar {
	int _x;
public:
	UserPar<T> *x11;
	UserPar( T  &_x){
		_x = 10;
		//x11 = new UserPar();
	}



};

template<typename T>
class array{
public:
    array();
    array(const array<T>& );

    ~array();
private:
    T arr[10];
};


int main() {

	int x = 10;
	//UserPar<int> *x10 = new UserPar<int>::UserPar(&x);

	array<int> *up ;

	wgtT* A= new wgtT(&x);
	wgtT::UserPar * B = A->Par;

//	 wgtT::UserPar<int> *P = new  wgtT::UserPar<int>(&x);
	//>Par = new wgtT::UserPar<int>(&x);
	//A->UserPar<int>::Par(10);
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
