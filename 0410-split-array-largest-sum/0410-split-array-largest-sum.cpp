class Solution {
public:
    bool valid(vector<int>& nums,int k,int lim){
        long long sum=0;
        int cnt=1;
        for(int i:nums){
            sum+=i;
            if(sum>lim){
                cnt++;
                sum=i;
            }
        }
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=*max_element(nums.begin(),nums.end());
        long long e=accumulate(nums.begin(),nums.end(),0);
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
};