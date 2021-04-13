//Root.h
#pragma once
#include <iostream>

using namespace std;

class Root
{
private:
	int a, b;
	double x1;

public:

	Root();
	Root(int, int, double);
	Root(const Root& m);

	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }
	void SetX1(double value) { x1 = value; }

	int GetA() const {return a;}
	int GetB() const { return b; }
	double GetX1() const { return x1; }

	virtual void Result() = 0;
	virtual void Print() = 0;
};
