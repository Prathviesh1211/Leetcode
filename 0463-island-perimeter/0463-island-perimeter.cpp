class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c, vector<vector<int>>& vis) {
        int n = grid.size();
        int m = grid[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == 0)
            return 1;
        if (vis[r][c] == 1)
            return 0;
        vis[r][c] = 1;
        int ans = 0;
        ans += dfs(grid, r - 1, c, vis);
        ans += dfs(grid, r + 1, c, vis);
        ans += dfs(grid, r, c - 1, vis);
        ans += dfs(grid, r, c + 1, vis);
        return ans;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    perimeter += dfs(grid, i, j, vis);
                }
            }
        }
        return perimeter;
    }
};