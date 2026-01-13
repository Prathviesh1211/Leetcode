class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int x) {
        int n = nums.size();
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        if (sum / k >= x)
            cnt++;
        for (int i = k; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - k];
            if (sum / k >= x)
                cnt++;
        }
        return cnt;
    }
};