class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1;
        int cnt = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1] + 1) {
                cnt++;
                ans = max(cnt, ans);
            } else {
                cnt = 1;
            }
        }
        return ans;
    }
};