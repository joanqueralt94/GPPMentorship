#include "ValidMountainArray.h"

bool ValidMountainArray::validMountainArray(std::vector<int>& arr)
{
	if (arr.size() < 3)
		return false;

	int i = 0;
	// Ascending phase
	while (i < arr.size() - 1 && arr[i] < arr[i + 1])
	{
		i++;
	}

	// Peak can't be the first or last element
	if (i == 0 || i == arr.size() - 1)
		return false;

	// Descending phase
	while (i < arr.size() - 1 && arr[i] > arr[i + 1])
	{
		i++;
	}

	return i == arr.size() - 1;

}
