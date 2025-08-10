class Solution {
public:
    void dfs(vector<vector<char>>& board, int r, int c, int n, int m) {
        if(r<0 || r>=n || c<0 || c>=m || board[r][c]!='O')return;
        board[r][c] = '#';
        dfs(board,r+1,c,n,m);
        dfs(board,r-1,c,n,m);
        dfs(board,r,c+1,n,m);
        dfs(board,r,c-1,n,m);
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0)
            return;
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O')
                dfs(board, i, 0, n, m);
            if (board[i][m - 1] == 'O')
                dfs(board, i, m - 1, n, m);
        }
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O')
                dfs(board, 0, j, n, m);
            if (board[n - 1][j] == 'O')
                dfs(board, n - 1, j, n, m);
        }
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')board[i][j]='X';
                if(board[i][j]=='#')board[i][j]='O';
            }
        }
    }
};