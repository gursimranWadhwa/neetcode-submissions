class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), temp = 0;
        unordered_map<int, int> indices;
        for(int i = 0; i<n; i++) {
            temp = target - nums[i];
            if(indices.count(temp)) {return {indices[temp], i};}
            indices[nums[i]] = i;
        }
    }
};
