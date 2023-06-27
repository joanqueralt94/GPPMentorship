#include "HeightChecker.h"

int HeightChecker::heightChecker(std::vector<int>& heights)
{
	std::vector<int> expected = heights;
	std::sort(expected.begin(), expected.end());

	int output = 0;
	
	for (int i = 0; i < heights.size(); i++)
	{
		if (heights[i] != expected[i]) output++;
	}

	return output;
}
