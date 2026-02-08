class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> scnt1(128,-1);
        vector<int> tcnt1(128,-1);
        if(s.size() != t.size()) return 0;
        for(int i=0;i<s.size();i++){
            if(scnt1[s[i]]!=tcnt1[t[i]]) return 0;
            scnt1[s[i]]=tcnt1[t[i]]=i;
        }
        return 1;
    }
};