class Solution {
public:
    int smallestDivisor(vector<int>& nums, int k) {
        int n=nums.size();
        int s=1,e=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(valid(nums,k,m)){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return ans;
    }

    bool valid(vector<int>& arr,int k,int d){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            cnt+=arr[i]/d;
            int rem=arr[i]%d;
            if(rem)cnt++;
        }
        return cnt<=k;
    }
};