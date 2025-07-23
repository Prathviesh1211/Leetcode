class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int rem = k - nums[i];
            if (freq[rem] > 0) {
                cnt++;
                freq[rem]--;
            } else {
                freq[nums[i]]++;
            }
        }
        return cnt;
    }
};