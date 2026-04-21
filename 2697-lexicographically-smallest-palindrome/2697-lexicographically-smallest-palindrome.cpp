class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                int val=min(s[i]-'a',s[j]-'a');
                if(s[i]-'a'!=val)s[i]=val+'a';
                else s[j]=val+'a';
            }
            i++,j--;
        }
        return s;
    }
};