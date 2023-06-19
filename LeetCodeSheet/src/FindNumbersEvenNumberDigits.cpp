#include "FindNumbersEvenNumberDigits.h"

int FindNumbersEvenNumberDigits::findNumbers(std::vector<int>& nums)
{
	int counter = 0;
	int FinalCounter = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		std::string tempString = std::to_string(nums[i]);
		for (int j = 0; j < tempString.size(); j++)
		{
			counter++;
		}
		if (counter % 2 == 0) FinalCounter++;
		counter = 0;
	}
	return FinalCounter;
}
