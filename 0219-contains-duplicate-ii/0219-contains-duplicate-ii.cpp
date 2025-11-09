class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> st;
        int i=0;
        for(int j=0;j<n;j++){
            if(abs(j-i)>k){
                st.erase(nums[i]);
                i++;
            }
            if(st.count(nums[j]) && abs(j-i)<=k)return true;
            st.insert(nums[j]);
        }
        return false;
    }
};