class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (auto it : arr) {
            mpp[it]++;
        }
        int ans = 0;
        priority_queue<int> pq;
        for (auto it : mpp) {
            pq.push(it.second);
        }
        int half = arr.size() / 2;
        int removed = 0;
        while (removed < half) {
            removed += pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};