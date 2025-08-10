class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int mini=INT_MAX;
        int l=0;
        int sum=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=k){
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return mini==INT_MAX?0:mini;
    }
};