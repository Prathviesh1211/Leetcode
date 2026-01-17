class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& x) {
        vector<vector<int>> ans;
        int n=arr.size();
        int i=0;
        
        //intervals smaller than new int...
        while(i<n && arr[i][1]<x[0]){
            ans.push_back(arr[i]);
            i++;
        }

        //Merge overlapping ints.
        while(i<n && arr[i][0]<=x[1]){
            x[0]=min(x[0],arr[i][0]);
            x[1]=max(x[1],arr[i][1]);
            i++;
        }
        ans.push_back(x);

        //add remaining intervals..
        while(i<n){
            ans.push_back(arr[i]);
            i++;
        }
        
        return ans;
    }
};