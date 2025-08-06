class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int f1[26] = {0};
        int k = p.size();
        vector<int> ans;
        for (auto it : p) {
            f1[it - 'a']++;
        }
        int n=s.size();
        for (int i = 0; i <=n- k; i++) {
            int f2[26] = {0};
            for (int j = i; j < k + i; j++) {
                f2[s[j] - 'a']++;
            }
            bool isValid = true;
            for (int x = 0; x < 26; x++) {
                if (f1[x] != f2[x]) {
                    isValid = false;
                    break;
                }
            }
            if (isValid)
                ans.push_back(i);
        }
        return ans;
    }
};