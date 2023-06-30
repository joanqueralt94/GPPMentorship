#pragma once

#include "../utils/Log.h"

class SortingBlockExercises
{
public:
	void sortColors(std::vector<int>& nums);
	ListNode* insertionSortList(ListNode* head);
	std::vector<int> sortArray(std::vector<int>& nums);
	int findKthLargest(std::vector<int>& nums, int k);
	std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr);
	int maximumGap(std::vector<int>& nums);
};

