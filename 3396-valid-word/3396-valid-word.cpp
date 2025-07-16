class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3)return false;
        bool isvow=false;
        bool iscons=false;
        for(int i=0;i<word.size();i++){
            if(!isalnum(word[i]))return false;
            if(isalpha(word[i])){
                char ch=tolower(word[i]);
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')isvow=true;
                else iscons=true;
            }
        }
        return isvow && iscons;
    }
};