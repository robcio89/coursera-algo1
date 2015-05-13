#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PQ1/FileReader.h"
#include "../PQ1/MergeSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PQ1_UT
{
	TEST_CLASS(FileReaderTest)
	{
	public:

		TEST_METHOD(sort_test_1)
		{
			std::vector<int> nums = { 1, 3, 5, 2, 4, 6 };
			unsigned int inv = 3;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_2)
		{
			std::vector<int> nums = { 1, 5, 3, 2, 4 };
			unsigned int inv = 4;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_3)
		{
			std::vector<int> nums = { 5, 4, 3, 2, 1 };
			unsigned int inv = 10;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_4)
		{
			std::vector<int> nums = { 1, 6, 3, 2, 4, 5 };
			unsigned int inv = 5;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_5)
		{
			std::vector<int> nums = { 9, 12, 3, 1, 6, 8, 2, 5, 14, 13, 11, 7, 10, 4, 0 };
			unsigned int inv = 56;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_6)
		{
			std::vector<int> nums = { 37, 7, 2, 14, 35, 47, 10, 24, 44, 17,
				34, 11, 16, 48, 1, 39, 6, 33, 43, 26, 40, 4,
				28, 5, 38, 41, 42, 12, 13, 21, 29, 18, 3, 19,
				0, 32, 46, 27, 31, 25, 15, 36, 20, 8, 9, 49, 
			22, 23, 30, 45 };
			unsigned int inv = 590;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_7)
		{
			std::vector<int> nums = { 4, 80, 70, 23, 9, 60, 68, 27, 66, 78,
				12, 40, 52, 53, 44, 8, 49, 28, 18, 46, 21, 39, 51, 7, 87, 99,
				69, 62, 84, 6, 79, 67, 14, 98, 83, 0, 96, 5, 82, 10, 26, 48,
				3, 2, 15, 92, 11, 55, 63, 97, 43, 45, 81, 42, 95, 20, 25, 74,
				24, 72, 91, 35, 86, 19, 75, 58, 71, 47, 76, 59, 64, 93, 17, 50,
				56, 94, 90, 89, 32, 37, 34, 65, 1,
				73, 41, 36, 57, 77, 30, 22, 13, 29, 38, 16, 88, 61, 31, 85, 33, 54 };
			unsigned int inv = 2372;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_8)
		{
			std::vector<int> nums;

			for (int i = 1; i <= 100000; ++i)
				nums.push_back(i);

			unsigned int inv = 0;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_9)
		{
			std::vector<int> nums;

			for (int i = 1; i <= 99998; ++i)
				nums.push_back(i);

			nums.push_back(100000);
			nums.push_back(99999);
			
			unsigned int inv = 1;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_10)
		{
			std::vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

			unsigned int inv = 0;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_11)
		{
			std::vector<int> nums = { 1, 5, 3, 4, 2, 6 };

			unsigned int inv = 5;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_12)
		{
			std::vector<int> nums = { 6, 2, 3, 4, 5, 1 };

			unsigned int inv = 9;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(sort_test_13)
		{
			std::vector<int> nums = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

			unsigned int inv = 45;

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(inv, m.get_inversion());
		}

		TEST_METHOD(main_sort_test_1)
		{
			FileReader fr;
			std::vector<int> nums;
			unsigned int solution = 2507223936;
			std::string path = "..\\gistfile1.txt";
			nums = fr.read_file_content(path);

			Assert::IsTrue(nums.size() != 0);

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(solution, m.get_inversion());
		}

		TEST_METHOD(main_sort_test_2)
		{
			FileReader fr;
			std::vector<int> nums;
			unsigned int solution = 2407905288;
			std::string path = "..\\IntegerArray.txt";
			nums = fr.read_file_content(path);

			Assert::IsTrue(nums.size() != 0);

			MergeSort m;
			m.merge_sort(nums, 0, nums.size() - 1);

			Assert::AreEqual(solution, m.get_inversion());
		}

	};
}