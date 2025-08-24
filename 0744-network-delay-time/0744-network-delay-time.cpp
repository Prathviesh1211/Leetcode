typedef pair<int,int> p;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int ans=0;
        vector<pair<int,int>> adj[n+1];
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int> dist(n+1,INT_MAX);
        priority_queue<p,vector<p>,greater<p>> pq;
        pq.push({0,k});   
        dist[k]=0;    
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(d>dist[node])continue;
            for(auto it:adj[node]){
                int v=it.first;
                int w=it.second;
                if(dist[v]>w+dist[node]){
                    dist[v]=w+dist[node];
                    pq.push({dist[v],v});
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(dist[i]==INT_MAX)return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};