class Solution {
public:
    bool bs(vector<int> arr, int k) {
        int s = 0;
        int e = arr.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == k)
                return true;
            else if (k < arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        int sr = 0, er = n - 1;
        while (sr <= er) {
            int mid = sr + (er - sr) / 2;
            if (mat[mid][0] <= k && mat[mid][m - 1] >= k) {
                return bs(mat[mid], k);
            } else if (mat[mid][0] > k) {
                er = mid - 1;
            } else {
                sr = mid + 1;
            }
        }
        return false;
    }
};