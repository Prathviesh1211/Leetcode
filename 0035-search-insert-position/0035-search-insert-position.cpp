class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int n=nums.size(),ans=n;
        int s=0,e=n-1;
        while(s<=e){
           int m=s+(e-s)/2;
           if(nums[m]>k)e=m-1;
           else if(nums[m]<k)s=m+1;
           else return m;
        }
        return s;
    }
};