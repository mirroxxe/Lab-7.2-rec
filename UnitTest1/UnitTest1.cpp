#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №7.2 rec/Lab №7.2 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestGenerateMatrix)
		{
			const int n = 5;
			int matrix[n][n];

			generateMatrix(matrix, n);

			// Перевірка, чи всі елементи матриці знаходяться в правильному діапазоні
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					Assert::IsTrue(matrix[i][j] >= 0 && matrix[i][j] < 100);
				}
			}
		}
	};
}
