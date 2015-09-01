#pragma once
#include <vector>

class QuickSort
{
public:
	int partition(std::vector<int>& input, int p, int r);
	void sort(std::vector<int>& input, int p, int r);
	QuickSort();
	~QuickSort();

private:
	void swap(std::vector<int>& input, int first_index, int second_index);
};