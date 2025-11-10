class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=INT_MIN;
        int zero=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zero++;
            if(zero>k){
                if(nums[j]==0)zero--;
                j++;
            }
            if(zero<=k){
                ans=max(ans,i-j+1);
            }

        }
        return ans==INT_MIN?0:ans;
    }
};