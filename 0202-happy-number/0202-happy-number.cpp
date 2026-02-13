class Solution {
public:
    int sum(int n){
        int ans=0;
        while(n){
            int dig=n%10;
            ans+=(dig*dig);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        while(true){
            slow=sum(slow);
            fast=sum(sum(fast));
            if(fast==1){
                return true;
            }
            if(slow==fast)return false;
        }
        return false;
    }
};