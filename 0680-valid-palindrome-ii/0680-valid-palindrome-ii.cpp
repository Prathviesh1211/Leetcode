class Solution {
public:
    bool ispalind(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++,j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (ispalind(s,i+1,j) || ispalind(s,i,j-1));
            }else{
                j--;
                i++;
            }
        }
        return true;
    }
};