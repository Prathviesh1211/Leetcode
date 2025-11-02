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
            for(int i=1;i<s.size();i++){
                if(isupper(s[i]))return false;
            }
            return true;
        
    }
};