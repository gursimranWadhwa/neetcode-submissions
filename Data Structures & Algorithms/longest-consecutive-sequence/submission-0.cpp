class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> freq;
        int ans = 0, curr = 0, currCount = 0;
        for(auto &num:nums) {
            freq.insert(num);
        }
        for(auto &it:freq) {
            if(freq.count(it-1)) {continue;}
            curr = it+1;
            currCount = 1;
            while(1) {
                if(freq.count(curr)) {curr++; currCount++;}
                else break;
            }
            ans = max(ans, currCount);
        }
        return ans;
    }
};
