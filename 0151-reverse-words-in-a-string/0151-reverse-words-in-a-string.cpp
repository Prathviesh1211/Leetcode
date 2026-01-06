class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        string ans="";
        for(int j=0;j<n;j++){
            string temp="";
            while(s[j]!=' ' && j<n){
                temp+=s[j];
                j++;
            }
            reverse(temp.begin(),temp.end());
            if(temp.size()>0)ans+=' '+temp;
        }
        return ans.substr(1);
    }
};