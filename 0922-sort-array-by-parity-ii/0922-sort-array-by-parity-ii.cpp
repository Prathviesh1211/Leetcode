class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0,j=1;
        for(int x:nums){
            if(x%2==0){
                ans[i]=x;
                i+=2;
            }else{
                ans[j]=x;
                j+=2;
            }
        }
        return ans;
    }
};