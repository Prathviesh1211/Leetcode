class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=sum/k;
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            ans=max(ans,sum/k);
        }
        return ans==INT_MIN?-1:ans;
    }
};