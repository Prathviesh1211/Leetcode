class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(mpp.count(nums[i])){
                cnt+=mpp[nums[i]];
            }
            mpp[nums[i]]++;
        }
        return cnt;
    }
};