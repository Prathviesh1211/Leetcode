class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>0)break;
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum>0)r--;
                else if(sum<0)l++;
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    r--,l++;
                    while(nums[l]==nums[l-1] && l<r)l++;
                    while(nums[r]==nums[r+1] && l<r)r--;
                }
            }
        }   
        return ans;
    }
};