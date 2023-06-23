#include "ReplaceElementsGreatestElementRightSide.h"

std::vector<int> ReplaceElementsGreatestElementRightSide::replaceElements(std::vector<int>& arr)
{
	int n = arr.size();
	int maxRight = -1; // Initialize the maximum element to the right as -1

	for (int i = n - 1; i >= 0; i--) {
		int temp = arr[i]; // Store the current element
		arr[i] = maxRight; // Replace the current element with the maximum element to the right
		maxRight = std::max(maxRight, temp); // Update the maximum element to the right
	}

	return arr;
}
