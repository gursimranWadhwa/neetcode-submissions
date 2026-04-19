class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(n!=m) {return 0;}
        unordered_map<char, int> freq;
        for(auto &c:s) {
            freq[c]++;
        }
        for(auto &c:t) {
            if(freq.count(c)) {
                freq[c]--;
                if(freq[c]==0) {freq.erase(c);}
                continue;
            }
            return 0;
        }
        return freq.size()==0;
    }
};
