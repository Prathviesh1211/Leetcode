class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        map<int,int>mpp ;
        for(auto it:nums){
            mpp[it]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==0)ans.push_back(i);
        }
        return ans;
    }
};