#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4.4/Linear.cpp"
#include "../Project4.4/Square.cpp"
#include "../Project4.4/Root.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Square a(0,0,0,0,0);
			bool k = a.GetA();
			Assert::AreEqual(k, false);
		}
	};
}
