class Solution {
public:
    int valid(vector<int>& nums, int d,int k) {
        int cnt=1,cap=k;
        for(int i:nums){
            if(i>cap){
                cap=k;
                cnt++;
            }
            cap-=i;
        }
        return cnt<=d;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n=nums.size();
        int s=*max_element(nums.begin(),nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(valid(nums,days,m)){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return ans;
    }
};