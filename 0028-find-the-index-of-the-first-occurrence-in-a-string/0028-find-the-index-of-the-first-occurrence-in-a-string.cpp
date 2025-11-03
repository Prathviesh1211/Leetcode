class Solution {
public:
    int strStr(string s1, string s2) {
        if(s1.empty())return -1;
        // if(s2.empty())return 0;
        for(int i=0;i<=s1.size()-s2.size();i++){
            if(s1.substr(i,s2.size())==s2)return i;
        }
        return -1;
    }
};