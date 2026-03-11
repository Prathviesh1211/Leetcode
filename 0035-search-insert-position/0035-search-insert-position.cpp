class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0,e=n-1;
        if(x<nums[0])return 0;
        if(x>nums[n-1])return n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==x){
                return mid;
            }else if(nums[mid]<x){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return s;
    }
};