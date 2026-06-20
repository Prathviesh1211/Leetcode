class Solution {
public:
    int numRescueBoats(vector<int>& arr, int k) {
        int n=arr.size();
        int cnt=0;
        sort(arr.begin(),arr.end());
        int l=0,r=n-1;
        while(l<=r){
            if(arr[l]+arr[r]<=k){
                l++;
            }
                r--;
                cnt++;

        }
        return cnt;
    }
};