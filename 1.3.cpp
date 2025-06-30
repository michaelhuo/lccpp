#include <vector>
#include <map>
#include <ranges>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = nums.size();
        vector<int> output;
        if (count < 2) {
            return output;
        }
        map<int, int> seen;
        for(auto i = 0; i < count; i ++) {
            auto n = nums[i];
            auto d = target - n;
            if (seen.contains(d)) {
                auto j = seen[d];
                output.push_back(i);
                output.push_back(j);
                return output; 
            }
            seen[n] = i;
        }
        return output;
    }
};
int main(void) {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}