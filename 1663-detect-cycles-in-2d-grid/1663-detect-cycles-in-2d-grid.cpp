class Solution {
public:
    bool bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j,
             int src) {
        queue<pair<pair<int, int>, pair<int, int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        char c = grid[i][j];
         vis[i][j] = 1;
        q.push({{i, j}, {-1, -1}});
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        while (!q.empty()) {
            auto [pos, parent] = q.front();q.pop();
            int x = pos.first;
            int y = pos.second;
            int xfrom = parent.first;
            int yfrom = parent.second;
            for (int ind = 0; ind < 4; ind++) {
                int nx = x + dx[ind];
                int ny = y + dy[ind];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                    grid[nx][ny] == c) {
                    if (!vis[nx][ny]) {

                        vis[nx][ny] = 1;
                        q.push({{nx, ny}, {x, y}});
                    }else if(xfrom != nx || yfrom!=ny){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        bool iscycle;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    iscycle = bfs(grid, vis, i, j, grid[i][j]);
                    if (iscycle)
                        return true;
                }
            }
        }
        return iscycle;
    }
};