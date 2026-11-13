class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int s=0,e=m-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int row=0;
            for(int i=0;i<n;i++){
                if(mat[i][mid]>mat[row][mid]){
                    row=i;
                }
            }
            int left=mid>0?mat[row][mid-1]:-1;
            int right=mid<m-1?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }else if(left>mat[row][mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return {-1,-1};
    }
};