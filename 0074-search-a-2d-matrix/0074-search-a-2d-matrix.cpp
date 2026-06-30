class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        int s=0,e=m*n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int r=mid/m;
            int c=mid%m;
            if(mat[r][c]==x)return true;
            else if(mat[r][c]>x)e=mid-1;
            else s=mid+1;
        }
        return false;
    }
};