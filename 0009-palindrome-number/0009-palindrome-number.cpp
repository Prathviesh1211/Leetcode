class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0; 
        if(x==1)return true;
        long long num=0;
        long long temp=x;
        while(x){
            int dig=x%10;
            num=(num*10)+dig;
            x/=10;
        }
        return num==temp;
    }
};