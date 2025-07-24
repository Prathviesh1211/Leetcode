class Solution {
public:
    int longestPalindrome(string s) {
        int cnt=0;
        int upper[26]={0};
        int lower[26]={0};
        for(char c:s){
            if(islower(c))lower[c-'a']++;
            else upper[c-'A']++;
        }
        bool odd=false;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0)cnt+=lower[i];
            else{
                cnt+=lower[i]-1;
                odd=true;
            } 
            if(upper[i]%2==0)cnt+=upper[i];
            else{
                cnt+=upper[i]-1;
                odd=true;
            } 
        }
        if(odd)return odd+cnt;
        return cnt;
    }
};