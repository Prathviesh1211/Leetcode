class Solution {
public:
    void dfs(vector<vector<char>>& board, int r, int c) {
        int n = board.size();
        int m = board[0].size();
        if(r>=n || r<0 || c>=m || c<0 || board[r][c]!='X'){
            return;
        }
        board[r][c]='.';
        dfs(board,r-1,c);
        dfs(board,r+1,c);
        dfs(board,r,c-1);
        dfs(board,r,c+1);
    }

    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'X') {
                    dfs(board, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};