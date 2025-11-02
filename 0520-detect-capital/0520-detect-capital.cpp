class Solution {
public:
    bool detectCapitalUse(string word) {
        return allcap(word) || allsmall(word) || firstcap(word);   
    }
    bool allcap(string s){
        for(char c:s){
            if(islower(c))return false;
        }
        return true;
    }
    bool allsmall(string s){
        for(char c:s){
            if(isupper(c))return false;
        }
        return true;
    }
    bool firstcap(string s){
        if(!isupper(s[0]))return false;
            if(!allsmall(s.substr(1)))return false;
            return true;
        
    }
};