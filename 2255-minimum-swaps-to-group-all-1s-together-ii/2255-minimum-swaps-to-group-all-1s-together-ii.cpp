class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        
        int ans=INT_MAX;
        int ones=0;
        
        for(int x:nums)ones+=x;
        if(ones<=1)return 0;

        int cnt=0;
        int i=0;

        for(int j=0;j<2*n;j++){
            cnt+=nums[j%n];
            if(j-i+1>ones){
                cnt-=nums[i%n];
                i++;
            }
            // if(j-i+1==ones){
                ans=min(ans,ones-cnt);
            // }
        }

        return ans;

    }
};