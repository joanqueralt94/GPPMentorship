#include "RemoveDuplicatesSortedArray.h"

int RemoveDuplicatesSortedArray::removeDuplicates(std::vector<int>& nums)
{
	int k = 0;
	int n = nums.size();

	for (int i = 1; i < n; i++) {
		if (nums[i] != nums[k]) {
			k++;
			nums[k] = nums[i];
		}
	}

	int numUnique = k + 1;

	for (int i = numUnique; i < n; i++) {
		nums[i] = -1;
	}

	return numUnique;
}