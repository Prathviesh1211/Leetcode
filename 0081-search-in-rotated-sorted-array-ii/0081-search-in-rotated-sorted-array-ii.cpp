class Solution {
public:
    bool search(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==x)return true;
            else if(nums[s]==nums[m] && nums[m]==nums[e]){
                s++,e--;
            }else{
                if(nums[s]<=nums[m]){
                    if(nums[s]<=x && x<nums[m])e=m-1;
                    else s=m+1;
                }else{
                    if(nums[m]<x && x<=nums[e])s=m+1;
                    else e=m-1;
                }
            }
        }
        return false;
    }
};