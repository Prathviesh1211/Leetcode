class Solution {
public:
    int longestSubstring(string s, int k) {
        if (s.empty() || k > s.size())
            return 0;
        int hash[26] = {0};
        for (auto it : s)
            hash[it - 'a']++;
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i] - 'a'] < k) {
                int left = longestSubstring(s.substr(0, i), k);
                int right = longestSubstring(s.substr(i + 1, s.size()), k);
                return max(left, right);
            }
        }
        return s.size();
    }
};