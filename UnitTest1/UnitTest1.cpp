#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_0.6.2Iter/Lab_0.6.2Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 2, 6, 8, 21, 9 };
			int S = Sum(a, 5);

			Assert::AreEqual(S, 27);
		}
	};
}
