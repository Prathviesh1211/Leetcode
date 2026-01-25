class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> st;
        int j=0;
        for(int i=0;i<n;i++){
            if(abs(i-j)>k){
                st.erase(nums[j]);
                j++;
            }
            if(st.count(nums[i]) && abs(i-j)<=k)return true;
            st.insert(nums[i]);
        }
        return false;
    }
};