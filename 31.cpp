class Solution {
    //m1 1/25/2021
public:
    void reverse(vector<int>& nums, int low, int high);
    void nextPermutation(vector<int>& nums);
};

void Solution::reverse(vector<int>& nums, int low, int high) {
    for (int i = low, j = high; i < j; ++i, --j) {
        std::swap(nums[i], nums[j]);
    }
}
void Solution::nextPermutation(vector<int>& nums) {
    int size = nums.size();
    if (size < 2) {
        return;
    }
    int i = size - 2;
    while (i >= 0 && nums[i + 1] <= nums[i]) {
        i--;
    }
    if (i >= 0) {
        int j = size - 1;
        while (j >=0 && nums[j] <= nums[i]) {
            j--;
        }
        std::swap(nums[j], nums[i]);
    }
    reverse(nums, i + 1, size - 1);
    return;
}
