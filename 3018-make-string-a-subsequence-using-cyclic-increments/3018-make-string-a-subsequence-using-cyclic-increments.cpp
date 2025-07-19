class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0,j=0;
        while(i<str1.size() && j<str2.size()){
            char ch=str1[i];
            char in=(str1[i]-'a'+1)%26+'a';
            if(str2[j]==ch || str2[j]==in){
                j++;
            }
            i++;
        }
        return j==str2.size();
    }
};