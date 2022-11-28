#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(CheckB1)
		{
			double a = 2;
			double b = 4;
			try
			{
				checkB(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckB2)
		{
			double a = 3;
			double b = 6;
			try
			{
				checkValidParams(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckB3)
		{
			double a = 2;
			double b = -2;
			try
			{
				checkValidParams(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}
