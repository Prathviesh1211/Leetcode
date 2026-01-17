class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        if(arr.empty())return 0;
        
        int n=arr.size(),cnt=0;

        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        int end=arr[0][1];

        for(int i=1;i<n;i++){
            if(arr[i][0]<end)cnt++;
            else{
                end=arr[i][1];
            }
        }
        
        return cnt;

    }
};