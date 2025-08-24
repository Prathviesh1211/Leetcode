class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        double sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k){
                sum-=nums[i-k];
            }
            if(i>=k-1){
                ans=max(sum/k,ans);
            }
        }
        return ans;
    }
};