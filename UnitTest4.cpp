#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\batus\source\repos\ConsoleApplication10\ConsoleApplication10.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(CheckValid1)
		{
			double h = 2;
			try
			{
				checkValid(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValid2)
		{
			double h = -2;
			
			try
			{
				checkValid(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(CheckValid3)
		{
			double h = 0;
			
			try
			{
				checkValid(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}
