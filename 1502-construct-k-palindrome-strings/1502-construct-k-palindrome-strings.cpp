class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if (n < k)
            return false;
        if (n == k)
            return true;
        vector<int> hash(26, 0);
        for (int i = 0; i < n; i++) {
            hash[s[i] - 'a']++;
        }
        int oddcnt = 0;
        for (int i = 0; i < 26; i++) {
            if (hash[i] % 2 == 1) {
                oddcnt++;
            }
            if (oddcnt > k)
                return false;
        }
        return true;
    }
};