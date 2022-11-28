#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1 )
		{
			double a = 2;
			double n = 4;
			double expected = 6.85;
			double actual = calc(a, n);
			Assert::AreEqual(expected, actual);
		}

	public:
		TEST_METHOD(TestMethod2)
		{
			double a = -3;
			double n = 7;
			double expected = -4.35;
			double actual = calc(a, n);
			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod3)
		{
			double a = 8;
			double n = 3;
			double expected = 150;
			double actual = calc(a, n);
			Assert::AreEqual(expected, actual);
		}

	};
}
