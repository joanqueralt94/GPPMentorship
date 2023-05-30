#include "TwoSumTarget.h"

std::vector<int> TwoSumTarget::twoSum(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> table;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (table.find(complement) != table.end())
        {
            return { table[complement], i };
        }
        table[nums[i]] = i;
    }
    return {};
}
