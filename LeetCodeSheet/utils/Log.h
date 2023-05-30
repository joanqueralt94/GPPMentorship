#pragma once
#include <vector>
#include <iostream>
#include <string>

namespace Log
{
	void PrintIntVector(const std::vector<int>& intVector);
	void PrintStringVector(const std::vector<std::string>& stringVector);
	void PrintInt(int value);
	void PrintChar(const char* message);
	void PrintGrid(const std::vector<std::vector<int>>& grid);
	void PrintString(const std::string& word);
};

