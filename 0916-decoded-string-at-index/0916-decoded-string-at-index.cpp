class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len=0;
        for(char c:s){
            if(isalpha(c))len++;
            else len*=(c-'0');
        }
        for(int i=s.size()-1;i>=0;i--
        ){
            k%=len;
            char c=s[i];
            if(k==0 && isalpha(c))return string(1,c);
            if(isdigit(c))len/=(c-'0');
            else len--;
        }
        return "";
    }
};