class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int ans=-1;
        int n=arr.size();
        // int s=*min_element(arr.begin(),arr.end());
        int s=1;
        int e=*max_element(arr.begin(),arr.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(valid(arr,h,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool valid(vector<int>& arr,int h,int k){
        long long cnt=0;
        for(int i:arr){
            cnt+=i/k;
            if(i%k)cnt++;
        }
        return cnt<=h;
    }
};