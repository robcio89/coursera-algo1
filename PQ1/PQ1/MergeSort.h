#pragma once
#include <vector>
class MergeSort
{
public:
	void merge(std::vector<int>& vec, int p, int q, int r);
	void merge_sort(std::vector<int>& vec, int p, int r);
	unsigned int get_inversion() const;
	MergeSort();
	~MergeSort();

private:
	unsigned int inversions;
};

