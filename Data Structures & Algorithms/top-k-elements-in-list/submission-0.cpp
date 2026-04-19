class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(auto &num:nums) {
            freq[num]++;
        }
        map<int, vector<int>, greater<int>> freq2;
        for(auto &it:freq) {
            if(freq2.count(it.second)) {freq2[it.second].push_back(it.first);}
            else freq2[it.second] = {it.first};
        }
        vector<int> ans;
        int count = 0;
        for(auto &it:freq2) {
            for(auto &num:it.second) {
                ans.push_back(num);
                count++;
                if(count==k) {return ans;}
            }
        }
        return ans;
    }
};
