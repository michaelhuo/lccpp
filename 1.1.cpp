#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = size(nums);
        vector<int> output;
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (nums[i] + nums[j] == target) {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
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
// Output: 0 1
