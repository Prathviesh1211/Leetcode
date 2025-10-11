class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        int m = mat[0].size();
        int l=0,r=m-1;
        int t=0,b=n-1;
        while(l<=r && t<=b){
            for(int j=l;j<=r;j++){
                ans.push_back(mat[t][j]);
            }
            t++;
            for(int i=t;i<=b;i++){
                ans.push_back(mat[i][r]);
            }
            r--;
            if (t <= b) {  // extra check to avoid double printing
                for (int j = r; j >= l; j--)
                    ans.push_back(mat[b][j]);
                b--;
            }

            if (l <= r) {  // extra check to avoid double printing
                for (int i = b; i >= t; i--)
                    ans.push_back(mat[i][l]);
                l++;
            }
        }
        return ans;
    }
};