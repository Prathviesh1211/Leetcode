class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        int ans=-1;
            if(nums[s]<=nums[e]){
                return nums[s];
            }
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]>nums[e]){
                s=m+1;
            }else{
                ans=m;
                e=m-1;
            }
        }
        return ans==-1?-1:nums[ans];
    }
};