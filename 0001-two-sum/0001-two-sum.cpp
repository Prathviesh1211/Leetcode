class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int rem=k-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};