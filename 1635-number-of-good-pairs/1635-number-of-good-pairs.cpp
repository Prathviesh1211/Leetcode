class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])!=mpp.end()){
                cnt+=mpp[nums[i]];
            }
            mpp[nums[i]]++;
        }
        return cnt;
    }
};