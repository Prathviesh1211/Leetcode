class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> st;
        for(int i=0;i<min(k,n);i++){
            if(st.count(nums[i]))return true;
            st.insert(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(st.count(nums[i]))return true;
            st.insert(nums[i]);
            st.erase(nums[i-k]);
        }
        return false;
    }
};