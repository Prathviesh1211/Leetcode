class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r, int c) {
        int n = grid.size();
        int m = grid[0].size();
        if(r<0 || r>=n || c<0 || c>=m || grid[r][c]==0)return 0;
        int ans=grid[r][c];
        grid[r][c] = 0;
        ans+=dfs(grid,r-1,c);
        ans+=dfs(grid,r+1,c);
        ans+=dfs(grid,r,c-1);
        ans+=dfs(grid,r,c+1);
    
        return ans;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        // vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) {
                    ans = max(ans, dfs(grid, i, j));
                }
            }
        }
        return ans;
    }
};