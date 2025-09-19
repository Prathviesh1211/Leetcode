class Solution {
public:
    bool isvalid(vector<int>& a,int k,int h){
        int cnt=0;
        for(int i=0;i<a.size();i++){
            cnt+=a[i]/k;
            if(a[i]%k!=0)cnt++;
            if(cnt>h)return false;
        }
        return cnt<=h;
    }

    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        // int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        int s=1;
        int e=maxi;
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isvalid(arr,mid,h)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};