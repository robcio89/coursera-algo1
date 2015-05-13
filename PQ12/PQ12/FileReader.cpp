#include "FileReader.h"

FileReader::FileReader(void)
{
}

FileReader::~FileReader(void)
{
}

std::vector<int> FileReader::read_file_content(std::string file)
{
	std::vector<int> nums;
	std::fstream my_file(file, std::ios_base::in);

	int a;

	while (my_file >> a)
	{
		nums.push_back(a);
	}

	return nums;
}

void FileReader::hello()
{
	std::cout << "Hello!" << std::endl;
}

unsigned long long FileReader::get_sum(std::vector<int>& v)
{
	unsigned long long sum = 0;
	for (auto& i : v)
	{
		sum += i;
	}
	return sum;
}
