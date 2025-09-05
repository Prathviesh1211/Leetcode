class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> sum(n,0);
        int max=INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum[i]+=mat[i][j];
            }
            if(sum[i]>max)max=sum[i];
        }
        for(int i=0;i<n;i++){
            if(sum[i]==max){
                return {i,max};
            }
        }

        return {0,0};

    }
};