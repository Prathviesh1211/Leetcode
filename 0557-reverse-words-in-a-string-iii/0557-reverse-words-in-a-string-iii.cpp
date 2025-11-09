class Solution {
public:
    string reverseWords(string s) {
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++){
            string temp="";
            while(s[i]!=' ' && i<n){
                temp+=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            res+=temp;
            if(i<n && s[i]==' ')res+=' ';
        }
        return res;
    }
};