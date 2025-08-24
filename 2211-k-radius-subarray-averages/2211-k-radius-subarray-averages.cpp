class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int windk=2*k+1;
        long long sum=0;
        vector<int> avg(n,-1);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i>=windk){
                sum-=nums[i-windk];
            }
            if(i>=windk-1){
                avg[i-k]=sum/windk;
            }
        }
        return avg;
    }
};