class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int buy=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<buy){
                buy=nums[i];
            }
            ans=max(ans,nums[i]-buy);
        }
        return ans;
    }
};