class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>> ans(m,vector<int> (n));
        if(arr.size()!=m*n)return {};
        int ind=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=arr[ind++];
            }
        }
        return ans;
    }
};