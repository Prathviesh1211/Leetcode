class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>> ans(m,vector<int> (n));
        if(arr.size()!=m*n)return {};
        for(int i=0;i<arr.size();i++){
            int r=i/n;
            int c=i%n;
            ans[r][c]=arr[i];
        }
        return ans;
    }
};