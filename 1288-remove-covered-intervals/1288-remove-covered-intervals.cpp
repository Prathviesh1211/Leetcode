class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        
        int n=arr.size();
        int cnt=0;
        int maxe=0;

        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            if(a[0]==b[0])return a[1]>b[1];
            return a[0]<b[0];
        });

        for(auto it:arr){
            if(it[1]>maxe){
                cnt++;
                maxe=it[1];
            }
        }

        return cnt;
    }
};