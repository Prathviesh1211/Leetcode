class Solution {
public:
    void fn(vector<int> nums, vector<vector<int>> &ans, vector<int> temp,
            int ind) {
        if (ind == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        fn(nums, ans, temp, ind + 1);
        temp.pop_back();
        int i=ind+1;
        while(i<nums.size() && nums[i]==nums[i-1])i++;
        fn(nums, ans, temp, i);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        fn(nums, ans, temp, 0);
        return ans;
    }
};