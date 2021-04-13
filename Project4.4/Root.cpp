//Root.ccp
#include "Root.h"

Root::Root()
	:a(0),b(0),x1(0)
{}
Root::Root(int a, int b, double x1)
	:a(a),b(b),x1(x1)
{}
Root::Root(const Root& m)
	:a(m.a),b(m.b),x1(m.x1)
{}