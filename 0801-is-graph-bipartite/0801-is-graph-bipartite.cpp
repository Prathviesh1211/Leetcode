class Solution {

public:
    bool dfs(vector<vector<int>>& adj, vector<int>& color, int node,int c) {
        color[node] = c;
        for (auto v : adj[node]) {
                if (color[v] == -1) {
                    if(!dfs(adj,color,v,!c)) return false;
                } else if (color[node] == color[v])
                    return false;
            
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!dfs(graph, color, i,0))
                    return false;
            }
        }
        return true;
    }
};