class Solution {
public:
    void bfs(vector<vector<char>>& board, int r, int c) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>> q;
        q.push({r, c});
        int dr[4] = {0, 0, -1, 1};
        int dc[4] = {-1, 1, 0, 0};
        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            board[row][col] = '.';
            for (int i = 0; i < 4; i++) {
                int nr = dr[i] + row;
                int nc = dc[i] + col;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && board[nr][nc] == 'X') {
                    q.push({nr,nc});
                }
            }
        }
    }

    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'X') {
                    bfs(board, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};