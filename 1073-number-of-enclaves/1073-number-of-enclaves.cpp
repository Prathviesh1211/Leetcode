class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c,int n,int m){
        if(r<0 || r>=n || c<0 || c>=m || grid[r][c]!=1)return;
        grid[r][c]=-1;
        dfs(grid,r+1,c,n,m);
        dfs(grid,r-1,c,n,m);
        dfs(grid,r,c+1,n,m);
        dfs(grid,r,c-1,n,m);
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        if(n==0)return 0;
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1)dfs(grid,i,0,n,m);
            if(grid[i][m-1]==1)dfs(grid,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1)dfs(grid,0,i,n,m);
            if(grid[n-1][i]==1)dfs(grid,n-1,i,n,m);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};