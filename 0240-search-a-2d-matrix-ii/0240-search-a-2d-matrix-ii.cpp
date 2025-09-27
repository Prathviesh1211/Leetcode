class Solution {
public:
    bool bs(const vector<int>& arr, int k) {
        int s = 0, e = arr.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == k) return true;
            else if (arr[mid] > k) e = mid - 1;
            else s = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        for (int i = 0; i < n; i++) {
            if (bs(mat[i], target)) return true;
        }
        return false;
    }
};
