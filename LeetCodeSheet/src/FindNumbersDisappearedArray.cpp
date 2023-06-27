#include "FindNumbersDisappearedArray.h"

std::vector<int> FindNumbersDisappearedArray::findDisappearedNumbers(std::vector<int>& nums)
{
	int n = nums.size();

	std::vector<bool> PresentNumbers(n, false);

	std::vector<int> disappearedNumbers;

	for (int i = 0; i < n; i++)
	{
		int n = nums[i];
		PresentNumbers[n-1] = true;
	}

	for (int i = 0; i < n; i++)
	{
		if (PresentNumbers[i] == false)
		{
			disappearedNumbers.push_back(i+1);
		}
	}
	return disappearedNumbers;
}
