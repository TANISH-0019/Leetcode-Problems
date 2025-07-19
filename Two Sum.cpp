#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int complement = target - num;

            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }

            numMap[num] = i;
        }

        return {}; 
    }
};