class Solution {
public:
    void bfs(vector<vector<int>>& grid, int r, int c, vector<vector<int>>& vis,
             int& ans) {
        int temp = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({r, c});
        vis[r][c] = 1;
        int dc[4] = {1, -1, 0, 0};
        int dr[4] = {0, 0, 1, -1};
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            temp++;
            for (int i = 0; i < 4; i++) {
                int nr = dr[i] + r;
                int nc = dc[i] + c;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] &&
                    grid[nr][nc] == 1) {
                    q.push({nr, nc});
                    vis[nr][nc] = 1;
                }
            }
        }
        ans = max(temp, ans);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    bfs(grid, i, j, vis, ans);
                }
            }
        }
        return ans;
    }
};