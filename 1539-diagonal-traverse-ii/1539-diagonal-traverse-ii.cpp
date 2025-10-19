class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> res;
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty()){
            auto [r,c]=q.front();q.pop();
            res.push_back(nums[r][c]);
            if(c==0 && r+1<nums.size()){
                q.push({r+1,c});
            }
            if(c+1<nums[r].size()){
                q.push({r,c+1});
            }
        }
        return res;
    }
};