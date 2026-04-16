class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int ind=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[ind]=nums[i];
                ind+=2;
            }
        }
        ind=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                ans[ind]=nums[i];
                ind+=2;
            }
        }
        return ans;
    }
};