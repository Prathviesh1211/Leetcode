class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        while (nums.size() > 1) {
            sort(nums.begin(), nums.end());
            int x=nums.back();nums.pop_back();
            int y=nums.back();nums.pop_back();
            if(x!=y)   nums.push_back(x-y);
        }
        return nums.size() == 1 ? nums[0] : 0;
    }
};