class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                int times=n/i;
                string temp="";
                string sub=s.substr(0,i);
                while(times--){
                    temp+=sub;
                }
                if(temp==s)return true;
            }
        }
        return false;
    }
};