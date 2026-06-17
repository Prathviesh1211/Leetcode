class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,cnt=0,j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)cnt++;
            while(cnt>k){
                if(nums[j]==0)cnt--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};