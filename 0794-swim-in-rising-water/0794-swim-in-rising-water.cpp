class Solution {
public:
    typedef tuple<int,int,int> t;
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dist (n,vector<int> (m,INT_MAX));
        dist[0][0]=grid[0][0];
        priority_queue<t,vector<t>,greater<t>> pq;
        pq.push({grid[0][0],0,0});
        int dr[4]={0,0,-1,1};
        int dc[4]={-1,1,0,0};
        while(!pq.empty()){
            auto [d,x,y]=pq.top();
            pq.pop();
            if(x==n-1 && y==m-1)return d;
            for(int i=0;i<4;i++){
                int nr=dr[i]+x;
                int nc=dc[i]+y;
                if(nr>=0 && nr<n && nc>=0 && nc<m){
                    int depth=max(d,grid[nr][nc]);
                    if(depth<dist[nr][nc]){
                        dist[nr][nc]=depth;
                        pq.push({depth,nr,nc});
                    }
                }
            }   

        }
        return 0;
    }
};