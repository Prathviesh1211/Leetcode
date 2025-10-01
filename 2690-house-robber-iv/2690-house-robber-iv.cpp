class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int s=1,e=*max_element(nums.begin(),nums.end());
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
    bool valid(vector<int>& arr,int m,int k){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=m){
                cnt++;
                i++;
            }
        }
        return cnt>=k;
    }
};