class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=k)return i;
        }
        return ans;
    }
};