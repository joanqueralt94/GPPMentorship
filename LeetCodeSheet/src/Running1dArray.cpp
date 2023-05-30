#include "Running1dArray.h"

std::vector<int> Running1dArray::runningSum(std::vector<int>& nums)
{
    std::vector<int> tempVector = nums;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            nums[i] += tempVector[j];
        }
    }
    return nums;
}

std::vector<int> Running1dArray::runningSum2vectors(std::vector<int>& nums, std::vector<int>& vectorOutput)
{
    for (int i = 0; i < vectorOutput.size(); ++i)
    {
        vectorOutput[i] = nums[i];
        for (int j = 0; j < i; ++j)
        {
            vectorOutput[i] += nums[j];
        }
    }
    return vectorOutput;
}
