class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& arr) {
        vector<int> ans;
        unordered_map<int, vector<int>> adj;
        for (auto it : arr) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int start = -1;
        for (auto it : adj) {
            if (it.second.size() == 1) {
                start = it.first;
                break;
            }
        }
        ans.push_back(start);
        while(ans.size()<adj.size()){
            int curr=ans.back();
            int next=adj[curr][0];
            if (ans.size() > 1 && next == ans[ans.size() - 2]) {
                next = adj[curr][1];
            }
            ans.push_back(next);
        }
        return ans;
    }

    // void dfs(vector<int>& ans, unordered_map<int, vector<int>>& adj, int u,
    //          int prev, vector<int>& vis) {
    //     ans.push_back(u);
    //     vis[u] = 1;
    //     for (auto v : adj[u]) {
    //         if (!vis[v]) {
    //             dfs(ans, adj, v, u, vis);
    //         }
    //     }
    // }
};