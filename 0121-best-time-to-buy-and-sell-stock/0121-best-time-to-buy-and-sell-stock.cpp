class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int b=nums[0];
        for(int i=1;i<n;i++){
            int profit=nums[i]-b;
            ans=max(profit,ans);
            if(nums[i]<b)b=nums[i];
        } 
        return ans;
    }
};