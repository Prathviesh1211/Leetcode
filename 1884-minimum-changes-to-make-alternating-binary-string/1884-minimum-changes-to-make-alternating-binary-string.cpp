class Solution {
public:
    int fn(string s,char pre){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==pre){
                cnt++;
                pre=pre=='1'?'0':'1';
            }else{
                pre=s[i];
            }
        }
        return cnt;
    }
    int minOperations(string s) {
        char pre=s[0];
        int cnt1=fn(s,pre);
        int cnt2=fn(s,pre=='0' ?'1':'0');
        return min(cnt1,cnt2);
    }
};