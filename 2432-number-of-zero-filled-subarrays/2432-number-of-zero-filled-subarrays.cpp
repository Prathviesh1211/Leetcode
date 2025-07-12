class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int cnt=0;
        for(int e=0;e<nums.size();e++){
            if(nums[e]==0){
                cnt++;
                ans+=cnt;
            }else{
                cnt=0;
            }
        }
        return ans;
    }
};