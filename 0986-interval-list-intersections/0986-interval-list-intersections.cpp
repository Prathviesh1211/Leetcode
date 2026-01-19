class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        int i=0,j=0;
        vector<vector<int>> ans;
        while(i<a.size() && j<b.size()){
            int s=max(a[i][0],b[j][0]);
            int e=min(a[i][1],b[j][1]);
            if(s<=e){
                ans.push_back({s,e});
            }
            if(a[i][1]<=b[j][1])i++;
            else j++;
        }
        return ans;
    }
};