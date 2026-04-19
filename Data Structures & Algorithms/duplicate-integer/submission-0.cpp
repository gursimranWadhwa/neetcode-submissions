class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for(auto &num:nums) {
            if(freq.count(num)) return 1;
            freq.insert(num);
        }       
        return 0;
    }
};