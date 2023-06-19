#include "DuplicateZeros.h"

void DuplicateZeros::duplicateZeros(std::vector<int>& arr)
{
	int size = arr.size();
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 0)
		{
			arr.insert(arr.begin() + i, 0);
			++i;
			continue;
		}
	}

	while (arr.size() != size)
	{
		arr.pop_back();
	}
}
