#include "pch.h"
#include "CppUnitTest.h"
#include "../Rational.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational c;
			c.setA(3);
			Assert::AreEqual(3, c.getA());
		}
	};
}
