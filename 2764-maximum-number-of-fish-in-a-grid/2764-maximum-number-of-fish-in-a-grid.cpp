class Solution {
public:
    int bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();
        vis[r][c] = 1;
        queue<pair<int, int>> q;
        q.push({r, c});
        int ans = 0;
        int dr[4] = {0, 0, -1, 1};
        int dc[4] = {-1, 1, 0, 0};
        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            ans += grid[row][col];
            for (int i = 0; i < 4; i++) {
                int nr = dr[i] + row;
                int nc = dc[i] + col;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] &&
                    grid[nr][nc] != 0) {
                    q.push({nr, nc});
                    vis[nr][nc] = 1;
                }
            }
        }
        return ans;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0 && !vis[i][j]) {
                    ans = max(ans, bfs(grid,vis, i, j));
                }
            }
        }
        return ans;
    }
};