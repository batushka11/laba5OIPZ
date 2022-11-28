#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(CheckValidParamsK1)
		{
			double k = 0;
			try
			{
				checkValidParams(k);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValidParamsK2)
		{
			double k = -2;

			try
			{
				checkValidParams(k);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValidParamsK3)
		{
			double k = 1;

			try
			{
				checkValidParams(k);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}
