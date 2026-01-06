class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        string ans="";
        int i=0;
        int j=0;
        while(j<n){
            while(j<n && s[j]==' ')j++;
            if(j>=n)break;
            string temp="";
            while(s[j]!=' '  && j<n){
                temp+=s[j];
                j++;
            }
            reverse(temp.begin(),temp.end());
            if(!ans.empty())ans+=' '; 
            ans+=temp;
        }
        return ans;
    }
};