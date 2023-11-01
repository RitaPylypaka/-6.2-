#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.2іт/пр6.2іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62іт
{
	TEST_CLASS(UnitTest62іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m = 8;
			int n[m] = { 1,2,3,4,5,6,7,8 };
			double d = Find(n, m);
			Assert::AreEqual(4, d, 0.1);
		}
	};
}
