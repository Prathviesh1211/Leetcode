class Solution {
public:
    void fn(vector<int>& arr, vector<vector<int>>& ans, vector<int> temp,
            int ind) {
        if (ind == arr.size()) {
            ans.push_back(temp);
            return;
        }
        fn(arr, ans, temp, ind + 1);
        temp.push_back(arr[ind]);
        fn(arr, ans, temp, ind + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        fn(nums, ans, temp, 0);
        return ans;
    }
};