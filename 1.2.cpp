#include <iostream>
#include <vector>
#include <ranges> // C++20 for ranges::sort

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int count = nums.size();
        std::vector<int> output;
        if (count < 2) {
            return output;
        }
        std::vector<int> sorted_nums(nums);
        std::ranges::sort(sorted_nums);
        int num1, num2;
        auto it = sorted_nums.begin();
        auto rit = sorted_nums.rbegin();
        while ( it != rit.base() ) {
            auto sum = *it + *rit;
            if (sum < target) {
                it ++;
            } else if (sum > target) {
                rit ++;
            } else { // sum == target
                num1 = *it;
                num2 = *rit;
                break;
            }
        }
        int index1, index2;
        bool found1 = false, found2 = false;
        int new_start = 0;
        for (int i = 0; i < count; i ++) {
            if (nums[i] == num1) {
                index1 = i;
                new_start = i + 1;
                found1 = true;
                break;
            } else if (nums[i] == num2) {
                index2 = i;
                new_start = i + 1;
                found2 = true;
                break;
            }
        }
        for (int i = new_start; i < count; i++) {
            if (found1 && (nums[i] == num2)) {
                index2 = i;
                found2 = true;
                break;
            } else if (found2 && (nums[i] == num1)) {
                index1 = i;
                found1 = true;
                break;
            }
        }
        if (found1 && found2) {
            output.push_back(index1);
            output.push_back(index2);
        }
        return output;
    }
};

int main(void) {
    Solution solution;
    //std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> nums = {3, 2, 3};
    int target = 6;
    std::vector<int> result = solution.twoSum(nums, target);
    for (int index : result) {
        std::cout << index << " ";
    }
    return 0;
}
// Output: 0 1
