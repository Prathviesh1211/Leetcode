class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        if (image[sr][sc] == color)
            return image;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int old = image[sr][sc];
        image[sr][sc] = color;
        int dr[4] = {0, 0, -1, 1};
        int dc[4] = {-1, 1, 0, 0};
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    image[nr][nc] == old) {
                    q.push({nr, nc});
                    image[nr][nc] = color;
                }
            }
        }
        return image;
    }
};