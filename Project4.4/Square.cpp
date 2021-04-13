//Square.ccp
#include "Square.h"

Square::Square()
	:Root(0,0,0),c(0),x2(0)
{}
Square::Square(int a, int b, int c,double x1, double x2)
	:Root(a,b,x1),c(c),x2(x2)
{}
Square::Square(const Square& m)
	:Root(m),c(m.c),x2(m.x2)
{}
void Square::Result()
{
	double D = GetB() * GetB() - 4 * GetA() * GetC();
	if (D < 0)
		SetX1(0);
	else 
	{
		SetX1((-1 * GetB() - sqrt(D)) / 2 * GetA());
		SetX2((-1 * GetB() + sqrt(D)) / 2 * GetA());
	}
}
void Square::Print() 
{
	cout <<GetA() << "x^2" << " + " <<GetB() << " x " << " + " << GetC() << " = 0 " << endl;
	if (GetX1() != 0) 
	{
		cout << "x1 = " << GetX1() << endl;
		cout << "x2 = " << GetX2() << endl;
	}
	else
		cout << "No Roots(D < 0)!" << endl;
}
