class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int b=nums[0];
        for(int i=1;i<n;i++){
            ans=max(ans,nums[i]-b);
            if(nums[i]<b)b=nums[i];
        }
        return ans;

    }
};