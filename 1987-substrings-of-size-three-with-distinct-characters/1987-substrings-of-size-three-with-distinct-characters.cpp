class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0;
        for(int i=2;i<s.size();i++){
            char a=s[i-2];
            char b=s[i-1];
            char c=s[i];
            if(a!=b && b!=c && a!=c){
                cnt++;
            }
        }
        return cnt;
    }
};