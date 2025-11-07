class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (i >= k) {
                sum -= nums[i - k];
            }
            if (i >= k - 1) {
                ans = max(ans, sum / k);
            }
        }
        return ans == INT_MIN ? -1 : ans;
    }
};