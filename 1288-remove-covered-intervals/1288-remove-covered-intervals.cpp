class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        //   sort(arr.begin(), arr.end());
        // vector<vector<int>> ans;
        int n = arr.size();

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            // auto [s1,e1]=arr[i]
            bool covered = false;
            int s1 = arr[i][0];
            int e1 = arr[i][1];
            for (int j = 0; j < n; j++) {
                int s2 = arr[j][0];
                int e2 = arr[j][1];
                if (i != j && (s2 <= s1 && e2 >= e1)) {
                    covered = true;
                    break;
                }
            }
            if (!covered)
                cnt++;
        }

        return cnt;
    }
};