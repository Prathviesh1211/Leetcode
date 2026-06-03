class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int ones=0,zeroes=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zeroes++;
            while(zeroes>k){
                    if(nums[j]==0)zeroes--;
                    j++;
                }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};