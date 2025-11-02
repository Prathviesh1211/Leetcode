class Solution {
public:
    bool detectCapitalUse(string s) {
        int n=s.size();
        int cnt=0;
        for(char c:s){
            if(c>='A' && c<='Z')cnt++;
        }        
        if(cnt==n)return true;
        if(cnt==0)return true;
        if(cnt==1 && isupper(s[0]))return true;
        return false;
    }
};