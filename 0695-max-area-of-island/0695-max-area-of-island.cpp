class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c, vector<vector<int>>& vis) {
        int temp = 1;
        int n = grid.size();
        int m = grid[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] != 1 ||
            vis[r][c] == 1) {
            return 0;
        }
        vis[r][c] = 1;
        temp += dfs(grid, r - 1, c, vis);
        temp += dfs(grid, r + 1, c, vis);
        temp += dfs(grid, r, c - 1, vis);
        temp += dfs(grid, r, c + 1, vis);
        return temp;
    }
    // int bfs(vector<vector<int>>& grid, int r, int c, vector<vector<int>>&
    // vis) {
    //     int temp = 0;
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     queue<pair<int, int>> q;
    //     q.push({r, c});
    //     vis[r][c] = 1;
    //     int dc[4] = {1, -1, 0, 0};
    //     int dr[4] = {0, 0, 1, -1};
    //     while (!q.empty()) {
    //         auto [r, c] = q.front();
    //         q.pop();
    //         temp++;
    //         for (int i = 0; i < 4; i++) {
    //             int nr = dr[i] + r;
    //             int nc = dc[i] + c;
    //             if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] &&
    //                 grid[nr][nc] == 1) {
    //                 q.push({nr, nc});
    //                 vis[nr][nc] = 1;
    //             }
    //         }
    //     }
    //     return temp;
    // }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int temp = dfs(grid, i, j, vis);
                    ans = max(temp, ans);
                }
            }
        }
        return ans;
    }
};