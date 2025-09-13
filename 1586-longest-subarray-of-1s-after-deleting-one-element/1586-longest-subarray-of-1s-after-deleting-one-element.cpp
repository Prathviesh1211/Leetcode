class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0;
        int i=0;
        int one=0;
        int n=nums.size();
        int zero=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0)zero++;
            // if(nums[j]==1)one++;
            while(zero>1){
                if(nums[i]==0)zero--;
                i++;
            }
            cnt=max(cnt,j-i);
        }
        return cnt;
    }
};