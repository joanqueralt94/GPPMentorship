#pragma once
#include "utils/Log.h"
#include <vector>

class Running1dArray
{
public:
	std::vector<int> runningSum(std::vector<int>& nums);
	std::vector<int> runningSum2vectors(std::vector<int>& nums,
		std::vector<int>& outputVector);

	Running1dArray()
	{

	}
};

