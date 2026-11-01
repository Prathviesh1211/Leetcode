class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        double sum=0;
        int i=0;
        while(i<n){
            sum+=nums[i];
            if(i>=k)sum-=nums[i-k];
            if(i>=k-1)ans=max(ans,sum/k);
            i++;
        }
        return ans==INT_MIN?0:ans;
    }
};