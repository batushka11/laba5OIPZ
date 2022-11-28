#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(CheckValidParams1)
		{
			double a = 2;
			double x = 2;
			try
			{
				checkValidParams(a, x);
				Assert::IsTrue(true);
			}
			catch(...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValidParams2)
		{
			double a = 1;
			double x = 2;
			try
			{
				checkValidParams(a, x);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValidParams3)
		{
			double a = 2;
			double x = -2;
			try
			{
				checkValidParams(a, x);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}
