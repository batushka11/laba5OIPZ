#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2;
			double x = 1;
			double expected = 1.5;
			double actual = calc(a,x);
			Assert::AreEqual(expected, actual);
		}
	
	public:
		TEST_METHOD(TestMethod2)
		{
			double a = 4;
			double x = -3;
			double expected = -2.5;
			double actual = calc(a, x);
			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod3)
		{
			double a = 8;
			double x = 3;
			double expected = 150;
			double actual = calc(a, x);
			Assert::AreEqual(expected, actual);
		}

	};
}
