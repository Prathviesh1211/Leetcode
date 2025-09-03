class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_map<char, int> mpp;
        vector<int> hash(256,0);
        int i = 0;
        int ans = 0;
        for (int j = 0; j < s.size(); j++) {
            if (hash[s[j]]==1) {
                while (hash[s[j]]==1) {
                    hash[s[i]]--;
                    i++;
                }
            }
            hash[s[j]]++;
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};