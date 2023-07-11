#include "SortingBlockExercises.h"

void SortingBlockExercises::sortColors(std::vector<int>& nums)
{
	sort(nums.begin(), nums.end());
}

ListNode* SortingBlockExercises::insertionSortList(ListNode* head)
{
	if (!head || !head->next)
		return head;

	ListNode* sorted_head = new ListNode(INT_MIN);  // Dummy node for the sorted list

	while (head) {
		ListNode* current = head;
		head = head->next;

		if (current->val < sorted_head->val) {
			current->next = sorted_head;
			sorted_head = current;
		}
		else {
			ListNode* prev = sorted_head;
			ListNode* curr = sorted_head->next;

			while (curr && current->val >= curr->val) {
				prev = curr;
				curr = curr->next;
			}

			prev->next = current;
			current->next = curr;
		}
	}

	return sorted_head->next;
}

std::vector<int> SortingBlockExercises::sortArray(std::vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	return nums;
}

int SortingBlockExercises::findKthLargest(std::vector<int>& nums, int k)
{
	sort(nums.rbegin(), nums.rend());
	return nums[k-1];
}

std::vector<std::vector<int>> SortingBlockExercises::minimumAbsDifference(std::vector<int>& arr)
{
	sort(arr.begin(), arr.end());
	std::vector<std::vector<int>> minimumPairs;

	int minDiff = INT_MAX;

	for (int i = 0; i < arr.size() - 1; i++)
	{
		int diff = arr[i + 1] - arr[i];
		minDiff = std::min(minDiff, diff);
	}

	for (int i = 0; i < arr.size() - 1; i++)
	{
		int diff = arr[i + 1] - arr[i];

		if (diff == minDiff)
		{
			std::vector<int> innerVector;
			innerVector.push_back(arr[i]);
			innerVector.push_back(arr[i + 1]);
			minimumPairs.push_back(innerVector);
		}
	}

	return minimumPairs;
}

int SortingBlockExercises::maximumGap(std::vector<int>& nums)
{
	if (nums.size() < 2)
	{
		return 0;
	}

	sort(nums.begin(), nums.end());

	int maxGap = 0;

	for (int i = 0; i < nums.size() - 1; i++)
	{
		int diff = nums[i + 1] - nums[i];
		maxGap = std::max(maxGap, diff);
	}

	return maxGap;
}

std::vector<int> SortingBlockExercises::topKFrequent(std::vector<int>& nums, int k)
{
	std::unordered_map<int, int> table;


	for (int i = 0; i < nums.size(); i++)
	{
		table[i] = nums[i];
	}



	return std::vector<int>();
}
