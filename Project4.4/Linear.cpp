//Linear.ccp
#include "Linear.h"

Linear::Linear() 
	:Root()
{}
Linear::Linear(int a, int b, double x1) 
	:Root(a,b,x1)
{}
Linear::Linear(const Linear& m)
	:Root(m)
{}
void Linear::Result() 
{
	Root::SetX1((-1 * GetB()) / (GetA() * 1.));
}
void Linear::Print() 
{
	cout << GetA() << "x" << " + " << GetB() << " = 0 " << endl;
	cout << "x = " << GetX1() << endl;
}
