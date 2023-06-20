#include "MergedSortedArray.h"

void MergedSortedArray::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	std::copy(nums2.begin(), nums2.end(), nums1.begin() + m);
	std::sort(nums1.begin(), nums1.end());
}
