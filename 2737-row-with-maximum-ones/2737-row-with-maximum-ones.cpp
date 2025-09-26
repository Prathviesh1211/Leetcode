class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> sum(n, 0);
        int max = -1,ind=-1;
        for (int i = 0; i < n; i++) {
            int cnt=0;
            for (int j = 0; j < m; j++) {
                cnt += mat[i][j];
            }
            if (cnt > max){
                max = cnt;
                ind=i;
            }
        }
        

        return {ind,max};
    }
};