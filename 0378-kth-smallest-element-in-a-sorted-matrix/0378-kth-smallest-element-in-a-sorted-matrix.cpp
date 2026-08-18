class Solution {
public:
    typedef pair<int,pair<int,int>> t;
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<t,vector<t>,greater<t>> pq;
        int n=mat.size();
        for(int i=0;i<mat[0].size();i++){
            pq.push({mat[i][0],{i,0}});
        }
        while(k>1){
            int val=pq.top().first;
            auto [r,c]=pq.top().second;
            pq.pop();
            if(c+1<n){
                pq.push({mat[r][c+1],{r,c+1}});
            }
            k--;
        }
        return pq.top().first;
    }
};