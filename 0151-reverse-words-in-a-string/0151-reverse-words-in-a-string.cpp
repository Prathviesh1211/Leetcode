class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        int n=s.size();
        int i=0;
        string res="";
        while(i<n){
            while(i<n && s[i]==' ')i++;
            string temp="";
            while(i<n && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            if (temp.empty()) continue;
            reverse(temp.begin(),temp.end());
            if(!res.empty())res+=' ';
            res+=temp;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};