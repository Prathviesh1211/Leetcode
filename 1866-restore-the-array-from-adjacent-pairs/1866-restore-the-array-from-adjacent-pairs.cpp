class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& arr) {
        vector<int> ans;
        unordered_map<int,vector<int>> adj;
        for(auto it:arr){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int start=-1;
        for(auto it:adj){
            if(it.second.size()==1){
                start=it.first;
            }
        }
        dfs(ans,adj,start,-1);
        return ans;
    }

    void dfs(vector<int>& ans,unordered_map<int,vector<int>> &adj,int u,int prev){
        ans.push_back(u);
        for(auto v:adj[u]){
            if(v!=prev){
                dfs(ans,adj,v,u);
            }
        }
    }
};