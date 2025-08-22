class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mpp[nums[i]]++;
            if(i>=k){
                sum-=nums[i-k];
                mpp[nums[i-k]]--;
                if(mpp[nums[i-k]]==0)mpp.erase(nums[i-k]);
            }
            if(i>=k-1 && mpp.size()==k){
                ans=max(sum,ans);
            }
        }
        return ans;
    }
};