class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        char prev = '\0';
        int cnt = 1;
        for (char c : s) {
            if (c == prev) {
                cnt++;
            } else {
                cnt = 1;
                prev = c;
            }
            if (cnt <= 2) {
                res += c;
            }
        }
        return res;
    }
};