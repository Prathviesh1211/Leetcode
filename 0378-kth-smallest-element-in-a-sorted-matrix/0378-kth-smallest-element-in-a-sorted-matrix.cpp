class Solution {
public:
    typedef pair<int,pair<int,int>> p;
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<p>arr;
        for(int i=0;i<matrix.size();i++){
            arr.push_back({matrix[i][0],{i,0}});
        }
        int n=matrix.size();
        int m=matrix[0].size();
        priority_queue<p,vector<p>,greater<p>> pq(arr.begin(),arr.end());
        while(--k){
            int val=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            if(col+1<m){
                pq.push({matrix[row][col+1],{row,col+1}});
            }
        }
        return pq.top().first;
    }
};