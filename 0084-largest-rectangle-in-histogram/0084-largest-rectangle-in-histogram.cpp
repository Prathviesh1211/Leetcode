class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MIN;
        stack<pair<int, int>> st;
        for (int i = 0; i < n; i++) {
            int s = i;
            while (!st.empty() && st.top().second > arr[i]) {
                auto [ind, h] = st.top();
                st.pop();
                ans = max(ans, h * (i - ind));
                s = ind;
            }
            st.push({s, arr[i]});
        }
        while (!st.empty()) {
            auto [ind, h] = st.top();
            st.pop();
            ans = max(ans, h * (n - ind));
        }
        return ans;
    }
};