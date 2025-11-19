class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int l=0,r=0;
        while(i<n){
            while(i<n && s[i]!=' '){
                i++;
                r++;
            }
            reverse(s.begin()+l,s.begin()+r);
            r++;
            i++;
            l=r;
        }
        return s;
    }
};