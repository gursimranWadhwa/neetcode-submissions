class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> freq;
        string temp = "";
        int n = strs.size();
        for(int i=0; i<n; i++) {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            if(freq.count(temp)) {freq[temp].push_back(i);}
            else {freq[temp] = {i};}
        }
        vector<vector<string>> ans;
        vector<string> curr = {};
        for(auto &t:freq) {
            for(auto &i:t.second) {
                curr.push_back(strs[i]);
            }
            ans.push_back(curr);
            curr = {};
        }
        return ans;
    }
};
