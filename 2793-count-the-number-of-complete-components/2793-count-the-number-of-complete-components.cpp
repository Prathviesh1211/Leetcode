class Solution {
public:
    bool bfs(vector<int> adj[],int i,vector<int> &vis){
        vis[i]=1;
        queue<int> q;
        int v=0;
        int e=0;
        q.push(i);
        while(!q.empty()){
            int node=q.front();q.pop();
            e+=adj[node].size();
            v++;
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        e/=2;
        int edges=(v*(v-1))/2;
        return edges==e;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int cnt=0;
        vector<int> adj[n];
        vector<int> vis(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(bfs(adj,i,vis))cnt++;
            }
        }
        return cnt;
    }
};