class Solution {
public:
    bool bfs(vector<vector<char>>& grid,vector<vector<int>>&vis,int r,int c){
        int n=grid.size(),m=grid[0].size();
        vis[r][c]=1;
        queue<pair<pair<int,int>,pair<int,int>>> q;
        q.push({{r,c},{-1,-1}});
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        char ch=grid[r][c];
        while(!q.empty()){
            auto [pos,parent]=q.front();q.pop();
            int x=parent.first;
            int y=parent.second;
            int row=pos.first;
            int col=pos.second;
            for(int i=0;i<4;i++){
                int nr=row+dr[i];
                int nc=col+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==ch){
                    if(!vis[nr][nc]){
                        vis[nr][nc]=1;
                        q.push({{nr,nc},{row,col}});
                    }else if(x!=nr || y!=nc)return true;
                }
            }
        }
        return false;

    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    bool iscycle=bfs(grid,vis,i,j);
                    if(iscycle)return true;
                }
            }
        }        
        return false;
    }
};