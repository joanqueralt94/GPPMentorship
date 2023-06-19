#include "MaxConsecutiveOnes.h"

int MaxConsecutiveOnes::findMaxConsecutiveOnes(std::vector<int>& nums)
{
	int maximum = 0;
	int tempCounter = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == 1) tempCounter++;
		if (nums[i] == 0)
		{
			tempCounter = 0;
		}
		if (tempCounter > maximum)
		{
			maximum = tempCounter;
		}
	}
	return maximum;
}
