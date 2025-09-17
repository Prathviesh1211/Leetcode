class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int buy=nums[0];
        for(int i=1;i<n;i++){
            ans=max(ans,nums[i]-buy);
            if(nums[i]<buy){
                buy=nums[i];
            }
        }
        return ans;
    }
};