class Solution {
public:
    bool issame(vector<int> h1, vector<int> h2) {
        for (int i = 0; i < 26; i++) {
            if (h1[i] != h2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        vector<int> f1(26, 0), f2(26, 0);
        for (char c : s1) {
            f1[c - 'a']++;
        }
        int k = s1.size();
        for (int i = 0; i < k; i++) {
            f2[s2[i] - 'a']++;
        }
        if (issame(f1, f2))
            return true;
        for (int i = k; i < s2.size(); i++) {
            f2[s2[i] - 'a']++;
            f2[s2[i - k] - 'a']--;
            if (issame(f1, f2))
                return true;
        }
        return false;
    }
};