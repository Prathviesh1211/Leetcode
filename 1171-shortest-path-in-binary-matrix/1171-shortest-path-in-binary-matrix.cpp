class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)return -1;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (n,0));
        queue<tuple<int,int,int>> q;
        q.push({0,0,1});
        int dr[8]={0,0,1,-1,-1,-1,1,1};
        int dc[8]={-1,1,0,0,-1,1,-1,1};
        while(!q.empty()){
            auto [r,c,dist]=q.front(); q.pop();
            if(r==n-1 && c==m-1)return dist;
            for(int i=0;i<8;i++){
                int nr=dr[i]+r;
                int nc=dc[i]+c;
                if(nr>=0 && nr<n && nc<m && nc>=0 && grid[nr][nc]==0 && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc,dist+1});
                }
            }
        }
        return -1;
    }
};