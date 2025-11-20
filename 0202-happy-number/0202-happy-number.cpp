class Solution {
public:
    bool isHappy(int n) {
        int slow=n,fast=n;
        while(true){
            slow=fn(slow);
            fast=fn(fn(fast));
            if(fast==1)return true;
            if(fast==slow)return false;
        }
        return false;
    }

    int fn(int n){
        int sum=0;
        while(n){
            int dig=n%10;
            dig=dig*dig;
            sum+=dig;
            n/=10;
        }
        return sum;
    }

};