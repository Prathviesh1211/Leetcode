class Solution {
public:
    int countless(vector<vector<int>> a,int mid,int n){
        int r=n-1,c=0;
        int cnt=0;
        while(r>=0 && c<n){
            if(a[r][c]<=mid){
                cnt+=(r+1);
                c++;
            }else{
                r--;
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int ans=0;
        int n=matrix.size();
        int low=matrix[0][0],high=matrix[n-1][n-1];
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=countless(matrix,mid,n);
            if(cnt>=k){
                high=mid-1;
                ans=mid;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};