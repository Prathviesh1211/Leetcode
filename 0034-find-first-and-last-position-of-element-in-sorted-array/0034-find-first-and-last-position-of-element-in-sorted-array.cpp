class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)ans.push_back(i);
        }
        if(ans.empty())return {-1,-1};
        int n=ans.size();
        return {ans[0],ans[n-1]};
    }
};