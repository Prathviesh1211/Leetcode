class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int l = 0, h = n - 1;
        vector<int> ans = {-1, -1};
        int left = bs(nums, x, true);
        int right = bs(nums, x, false);
        ans[0] = left;
        ans[1] = right;
        return ans;
    }
    int bs(vector<int>& nums, int x, bool first) {
        int n = nums.size();
        int s = 0, e = n - 1;
        int ans = -1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == x) {
                ans = m;
                if (first) {
                    e = m - 1;
                } else {
                    s = m + 1;
                }
            } else if (nums[m] > x) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return ans;
    }
};