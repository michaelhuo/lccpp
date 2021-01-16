class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // m0 01162021
        unordered_map<int, int> visited;
        vector<int> answer;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int n = nums[i];
            int c = target - n;
            if (visited.find(c) != end(visited)) {
                int j = visited[c];
                if (i != j) {
                    answer.push_back(j);
                    answer.push_back(i);
                    return answer;
                }
            } else {
                visited[n] = i;                
            }
        }
        return answer;        
    };
};
