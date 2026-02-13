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
        set<int> st;
        while(n!=1){
            if(st.find(n)!=st.end()){
                return false;
            }
            st.insert(n);
            n=sum(n);
        }
        return true;
    }
};