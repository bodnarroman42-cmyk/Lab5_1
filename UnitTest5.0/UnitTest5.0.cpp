#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_1/Lab5_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			double p = 34.0;
			double q = 61.0;


			double t = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);


			Assert::AreEqual(-0.665769, t, 0.0001);
		}
	};
}