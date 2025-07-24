class Solution {
public:
    string sortSentence(string s) {
        string str = "";
        vector<string> v(10);
        for (int i = 0; i < s.size(); i++) {
            if(s[i]==' ')continue;
            string temp = "";
            while (i < s.size() && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            int n = temp.back() - '0';
            temp.pop_back();
            v[n]=temp;
        }
        for (auto it : v) {
            if(it!="")str+=it+' ';
        }
        str.pop_back();
        return str;
    }
};