#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PQ1/FileReader.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PQ1_UT
{		
	TEST_CLASS(FileReaderTest)
	{
	public:
		
		TEST_METHOD(read_file_content_test)
		{
			FileReader fr;
			std::vector<int> nums;
			std::string path = "..\\gistfile1.txt";
			nums = fr.read_file_content("..\\gistfile1.txt");

			Assert::IsTrue(nums.size() != 0);
		}

		TEST_METHOD(sum_elements_test)
		{
			FileReader f;

			std::vector<int> nums;
			unsigned long long sum = 5000050000;
			std::string path = "..\\gistfile1.txt";
			nums = f.read_file_content("..\\gistfile1.txt");

			Assert::AreEqual(sum, f.get_sum(nums));
		}

	};
}