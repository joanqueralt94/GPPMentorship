#include "TwoSumTarget.h"

std::vector<int> TwoSumTarget::twoSum(std::vector<int>& nums, int target)
{
    
    std::vector<int> indices;
    indices.resize(nums.size());
    std::sort(nums.begin(), nums.end());
    
    int temp = 0;
    int counter = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > target)
        {
            indices.erase(indices.begin() + i);
        }
        else
        {
            temp += nums[i];
            indices[i] = counter;
            ++counter;
            if (temp < target)
            {
                continue;
            }
            else break;
        }
    }

    return indices;
}
