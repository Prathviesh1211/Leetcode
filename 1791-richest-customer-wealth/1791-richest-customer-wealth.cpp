class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int wealth=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=mat[i][j];
            }
            wealth=max(sum,wealth);
        }
        return wealth;
    }
};