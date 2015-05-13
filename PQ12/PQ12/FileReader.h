#pragma once

#include <fstream>
#include <vector>
#include <iostream>

class FileReader
{
public:

	FileReader(void);
	~FileReader(void);

	void hello();
	std::vector<int> read_file_content(std::string file);

	unsigned long long get_sum(std::vector<int>& v);

};

