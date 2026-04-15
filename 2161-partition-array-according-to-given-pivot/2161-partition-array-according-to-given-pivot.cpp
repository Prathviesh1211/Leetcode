class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans(n,pivot);
        int i=0,j=n-1;
        int l=0,r=n-1;
        while(l<n && r>=0){
            if(nums[l]<pivot){
                ans[i++]=nums[l];
            }
            if(nums[r]>pivot){
                ans[j--]=nums[r];
            }
            l++,r--;       
        }
        return ans;
    }
};
// [9,12,5,10,14,3,10]
//
// [9,5,3,10,10,12,14]
// [9,3,10,10,10,10,12,10]
// [9,3,5,10,14,12,10]
// [10,10,10,10,10,10,10]
// []