#include "ThirdMaximumNumber.h"

int ThirdMaximumNumber::thirdMax(std::vector<int>& nums)
{
	sort(nums.begin(), nums.end(), std::greater<int>());

	int differentNumber = 1;
	int lastNumber = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		
		if (lastNumber != nums[i])
		{
			differentNumber++;
			lastNumber = nums[i];
		}
		
		if (differentNumber == 3)
		{
			return lastNumber;
		}

	}

	return nums[0];

}
