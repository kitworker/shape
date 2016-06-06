#pragma once

#include "shape.h"
#include <iostream>

class tringle : public shape
{
	/*
	nw ---- n ---- |ne|
	|               |
	|               |
	w       m       e
	|               |
	|               |
	|sw|---- s ---- se
	*/
	point n, w, e;


public:
	point north() { return n; }
	point west() { return w; }
	point east() { return e; }
	tringle(point, point, point);
	void draw();

};

class ellipse : public shape
{
	/*
	nw ---- n ---- |ne|
	|               |
	|               |
	w       m       e
	|               |
	|               |
	|sw|---- s ---- se
	*/
	std::vector<point> ni;
	double a, b;
	point sw, ne;
	rectangle *pos;

public:
	

	ellipse(double, double, point);
	void draw();

};