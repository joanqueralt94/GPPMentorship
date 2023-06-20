#include "RemoveElement.h"

int RemoveElement::removeElement(std::vector<int>& nums, int val)
{
	int k = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == val)
		{
			nums[i] = '_';
		}
		else
		{
			k++;
		}
	}
	std::sort(nums.begin(), nums.end());
	return k;
}
