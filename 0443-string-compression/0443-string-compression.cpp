class Solution {
public:
    int compress(vector<char>& chars) {

        //    vector<char> temp;
        int n = chars.size();
        int ind = 0;
        for (int i = 0; i < n;) {
            char c = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == c) {
                cnt++;
                i++;
            }
            chars[ind] = c;
            ind++;
            if (cnt > 1) {
                string st = to_string(cnt);
                for (char ch : st) {
                    chars[ind] = ch;
                    ind++;
                }
            }
        }

        // for (int i = 0; i < temp.size(); i++) {
            // chars[i] = temp[i];
        // }/
        return ind;
    }
};