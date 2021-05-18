#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1(a)/Line.h"
#include "../5.1(a)/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line A(2, 4, 6);
			int test = A.root();
			Assert::AreEqual(1, test);
		}
	};
}
