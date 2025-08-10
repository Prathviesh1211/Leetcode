class Solution {
public:
    void dfs(vector<vector<int>>& grid, int r, int c, int n, int m) {
        queue<pair<int,int>> q;
        q.push({r,c});
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        grid[r][c]=-1;
        while(!q.empty()){
            auto [row,col]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr=dr[i]+row;
                int nc=dc[i]+col;
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                    grid[nr][nc]=-1;
                    q.push({nr,nc});
                }
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 0)
            return 0;
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1)
                dfs(grid, i, 0, n, m);
            if (grid[i][m - 1] == 1)
                dfs(grid, i, m - 1, n, m);
        }
        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 1)
                dfs(grid, 0, i, n, m);
            if (grid[n - 1][i] == 1)
                dfs(grid, n - 1, i, n, m);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};