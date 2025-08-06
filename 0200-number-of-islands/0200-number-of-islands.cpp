class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row,
             int col) {
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row, col});
        vis[row][col] = 1;
        int nr[4] = {1, -1, 0, 0};
        int nc[4] = {0, 0, 1, -1};
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = r - nr[i];
                int ncol = c - nc[i];
                if (nrow < n && nrow >= 0 && ncol >= 0 && ncol < m &&
                    !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    bfs(grid, vis, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};