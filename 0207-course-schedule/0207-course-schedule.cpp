class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& edg) {
        vector<int> adj[n];
        for (auto it : edg) {
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n, 0), indeg(n, 0);
        for (int i = 0; i < n; i++) {
            for (auto it : adj[i]) {
                indeg[it]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0){
                q.push(i);
                vis[i]=1;
            }
        }
        int cnt = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cnt++;  

            for (auto it : adj[node]) {
                indeg[it]--;   
                if (indeg[it] == 0) {
                    q.push(it);
                }
            }
        }

        return cnt==n;
    }
};