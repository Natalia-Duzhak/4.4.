//Linear.h
#pragma once
#include "Root.h"
class Linear : public Root
{
public:
	Linear();
	Linear(int, int,double);
	Linear(const Linear& m);

	virtual void Result();
	virtual void Print();
};
