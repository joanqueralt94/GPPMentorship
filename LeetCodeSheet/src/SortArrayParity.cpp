#include "SortArrayParity.h"

std::vector<int> SortArrayParity::sortArrayByParity(std::vector<int>& nums)
{
	int numberOfPairs = 0;
	std::vector<int> returnVector;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] % 2 == 0)
		{
			returnVector.push_back(nums[i]);
		}
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if(nums[i]%2 != 0) returnVector.push_back(nums[i]);
	}

	return returnVector;
}
