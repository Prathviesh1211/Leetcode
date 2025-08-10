class Solution {
public:
    void bfs(vector<vector<char>>& board, int r, int c, int n, int m) {
        queue<pair<int, int>> q;
        q.push({r, c});
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        board[r][c] = '#';
        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = dr[i] + row;
                int nc = dc[i] + col;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    board[nr][nc] == 'O') {
                    board[nr][nc] = '#';
                    q.push({nr, nc});
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0)
            return;
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O')
                bfs(board, i, 0, n, m);
            if (board[i][m - 1] == 'O')
                bfs(board, i, m - 1, n, m);
        }
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O')
                bfs(board, 0, j, n, m);
            if (board[n - 1][j] == 'O')
                bfs(board, n - 1, j, n, m);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                if (board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};