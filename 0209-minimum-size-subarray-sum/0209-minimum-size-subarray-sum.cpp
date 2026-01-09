class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
      int ans=INT_MAX;
        int n=nums.size();
        int sum=0;
        int i=0;
        int j=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=k){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }

      return (ans==INT_MAX)?0:ans;  
    }
};