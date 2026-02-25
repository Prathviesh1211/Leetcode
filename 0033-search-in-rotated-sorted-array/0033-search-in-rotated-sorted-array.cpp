class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(x==nums[m])return m;
            if(nums[m]<=nums[e]){
                if(x>nums[m] && x<=nums[e])s=m+1;
                else e=m-1;
            }else{
                if(x<nums[m] && x>=nums[s])e=m-1;
                else s=m+1;
            }
        }
        return -1;
    }
};