class Solution {
public:
    void fn(int n,int& cnt){
        if(n==0)return;
        cnt++;
        if(n%2==0)n/=2;
        else n-=1;
        fn(n,cnt);
    }
    int numberOfSteps(int num) {
        int cnt=0;
        fn(num,cnt);
        return cnt;
    }
};