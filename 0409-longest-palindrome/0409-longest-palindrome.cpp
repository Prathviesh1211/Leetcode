class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128,0);
        for(char c:s)freq[c]++;
        bool odd=false;
        int ans=0;
        for(int f:freq){
            if(f%2==0)ans+=f;
            else{
                ans+=f-1;
                odd=true;
            }
        }
        if(odd)ans+=1;
        return ans;
    }
};