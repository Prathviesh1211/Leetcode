class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0,i=0;
        while(word[j]!=ch && j<word.size()){
            j++;
        }
        if(j==word.size())return word;
        while(i<j){
            swap(word[i++],word[j--]);
        }
        return word;
    }
};