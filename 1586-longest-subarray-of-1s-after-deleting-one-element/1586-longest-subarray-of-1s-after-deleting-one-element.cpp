class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)cnt++;
            while(cnt>1){
                if(nums[j]==0)cnt--;
                j++;
            }
            if(cnt<=1){
                ans=max(ans,i-j);
            }
        }
        if(cnt==0){
            return n-1;
        }
        return ans==INT_MIN?0:ans;
    }
};