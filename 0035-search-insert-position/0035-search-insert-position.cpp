class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0,e=n-1;
        int ind=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=x){
                ind=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ind;
    }
};