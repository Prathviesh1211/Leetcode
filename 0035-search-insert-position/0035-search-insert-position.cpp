class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int n=nums.size(),ans=n;
        int s=0,e=n-1;
        while(s<=e){
           int m=s+(e-s)/2;
           if(nums[m]>=k){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return ans;
    }
};