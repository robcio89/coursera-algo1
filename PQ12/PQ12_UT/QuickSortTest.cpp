#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PQ12/QuickSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PQ12_UT
{
	TEST_CLASS(QuickSortTest)
	{
	public:
		
		TEST_METHOD(quick_sort_1)
		{
			QuickSort qc;

			std::vector<int> input = { 9, 7, 5, 11, 12, 2, 14, 3, 10, 6 };
			std::vector<int> output = { 2, 3, 5, 6, 7, 9, 10, 11, 12, 14 };

			auto input_size = input.size();

			qc.sort(input, 0, input_size - 1);

			for (int i = 0; i < input_size; ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}
		}

		TEST_METHOD(quick_sort_2)
		{
			QuickSort qc;

			std::vector<int> input = { 3,7,1,2,4,5,6 };
			std::vector<int> output = { 1,2,3,4,5,6,7 };

			auto input_size = input.size();

			qc.sort(input, 0, input[0]);

			for (int i = 0; i < input_size; ++i)
			{
				Assert::AreEqual(input[i], output[i]);
			}

			Assert::AreEqual(13, qc.get_comparisons());
		}

		//TEST_METHOD(quick_sort_3)
		//{
		//	QuickSort qc;

		//	std::vector<int> input = { 3, 7, 1, 2, 4, 5, 6 };
		//	std::vector<int> output = { 1, 2, 3, 4, 5, 6, 7 };

		//	auto input_size = input.size();

		//	qc.sort(input, 0, input_size - 1);

		//	for (int i = 0; i < input_size; ++i)
		//	{
		//		Assert::AreEqual(input[i], output[i]);
		//	}

		//	Assert::AreEqual(15, qc.get_comparisons());
		//}

	};
}