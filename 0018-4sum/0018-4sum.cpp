class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        sort(nums.begin(), nums.end()); // for uniqueness
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                unordered_set<long long> hash;
                for (int k = j + 1; k < n; k++) {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k];
                    long long x = (long long)target - sum;
                    if (hash.find(x) != hash.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)x};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hash.insert((long long)nums[k]);
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};
