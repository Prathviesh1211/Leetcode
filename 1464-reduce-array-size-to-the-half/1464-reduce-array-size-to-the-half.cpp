class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (auto it : arr) {
            mpp[it]++;
        }
        int ans = 0;
        vector<int> freq;
        for (auto it : mpp) {
            freq.push_back(it.second);
        }
        sort(freq.rbegin(), freq.rend());
        int half = arr.size() / 2;
        int removed = 0;
        for (auto it : freq) {
            removed += it;
            ans++;
            if (removed >= half) {
                break;
            }
        }
        return ans;
    }
};