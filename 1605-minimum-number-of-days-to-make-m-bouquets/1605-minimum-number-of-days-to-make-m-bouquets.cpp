class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        if((long long)m*k>n)return -1;
        int s=*min_element(arr.begin(),arr.end());
        int e=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(arr,mid,m,k)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool isValid(vector<int>& arr,int mid,int m,int k){
        int cnt=0;
        int b=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                cnt++;
            }else{
                b+=(cnt/k);
                cnt=0;
            }
        }
        b+=(cnt/k);
        if(b<m)return false;
        return true;
    }

};