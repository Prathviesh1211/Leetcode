class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int ind=n-1;
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[ind]=nums[i]*nums[i];
                i++;
            }else{
                ans[ind]=nums[j]*nums[j];
                j--;
            }
            ind--;
        }
        return ans;
    }
};