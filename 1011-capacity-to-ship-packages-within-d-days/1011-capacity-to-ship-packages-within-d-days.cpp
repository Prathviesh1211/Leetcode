class Solution {
public:
    int shipWithinDays(vector<int>& nums, int d) {
        int n=nums.size();
        int s=*max_element(nums.begin(),nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(valid(nums,d,m)){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return ans;
    }
    bool valid(vector<int>& nums,int d,int k){
        int cnt=1,sum=0;
        for(int i:nums){
            sum+=i;
            if(sum>k){
                sum=i;
                cnt++;
            }
        }
        return cnt<=d;
    }
};