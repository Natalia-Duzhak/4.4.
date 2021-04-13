//Square.h
#pragma once
#include "Root.h"
class Square : public Root
{
private:
	int c;
	double x2;
public:
	Square();
	Square(int, int, int,double,double);
	Square(const Square& m);

	void SetC(int value) { c = value; }
	void SetX2(double value) { x2 = value; }

	int GetC() const { return c; }
	double GetX2() const { return x2; }

	void Result();
	void Print();
};
