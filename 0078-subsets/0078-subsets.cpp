class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.empty())return ans;
        vector<int> temp;
        fn(nums,ans,temp,0);
        return ans;
    }
    void fn(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int ind){
        if(ind>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        fn(nums,ans,temp,ind+1);
        temp.pop_back();
        fn(nums,ans,temp,ind+1);
    }
};