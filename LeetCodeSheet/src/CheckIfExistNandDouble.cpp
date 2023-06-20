#include "CheckIfExistNandDouble.h"

bool CheckIfExistNandDouble::checkIfExist(std::vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = 0; j < arr.size(); j++)
			{
				if(i != j)
				{
					if ((arr[j] * 2) == arr[i])	return true;
				}
			}
		}
	}

	return false;
}
