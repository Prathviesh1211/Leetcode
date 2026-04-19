class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(!vowel(s[i]))i++;
            if(!vowel(s[j]))j--;
            if(vowel(s[i]) && vowel(s[j])){
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }

    bool vowel(char c){
        c=tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
};