#include "QuickSort.h"

void QuickSort::sort(std::vector<int>& input, int p, int r)
{
	if (p < r)
	{
		auto q = partition(input, p, r);
		sort(input, p, q - 1);
		sort(input, q + 1, r);
	}
}

int QuickSort::partition(std::vector<int>& input, int p, int r)
{
	auto pivot = input[r];
	auto minEnd = p;
	auto maxEnd = 0;

	for (maxEnd = p; maxEnd < r; ++maxEnd)
	{
		if (input[maxEnd] <= pivot)
		{
			swap(input, maxEnd, minEnd);
			++minEnd;
		}
	}
	swap(input, minEnd, r);
	return minEnd;
}

void QuickSort::swap(std::vector<int>& input, int first_index, int second_index)
{
	int temp = input[first_index];
	input[first_index] = input[second_index];
	input[second_index] = temp;
}

QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}
