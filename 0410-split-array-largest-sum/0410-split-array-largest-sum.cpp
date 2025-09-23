class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(),nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(valid(nums,mid,k)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool valid(vector<int>& arr,int cap,int k){
        int cnt=1;
        int curr=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+curr>cap){
                curr=arr[i];
                cnt++;
            }else{
                curr+=arr[i];
            }
        }   
        if(cnt<=k)return true;
        return false;
    }
};