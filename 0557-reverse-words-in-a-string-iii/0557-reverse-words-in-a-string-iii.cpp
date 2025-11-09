class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        string token="";
        string res="";
        
        while(ss>>token){
            reverse(token.begin(),token.end());
            res+=token+' ';
        }
        
        return res.substr(0,res.size()-1);
    }
};