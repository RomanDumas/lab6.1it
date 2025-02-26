#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.1_it/LR6.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 24;
			int* b = new int[k];
			int n = 0;
			int i = 1;
			int sum = 0;
			int count = 0;
			srand((unsigned)time(NULL));
			imputE(k, b);
			proces(b, k, sum, count);
			int expected = sum;
			Assert::AreEqual(sum, expected, 0.00001);
		}
	};
}
