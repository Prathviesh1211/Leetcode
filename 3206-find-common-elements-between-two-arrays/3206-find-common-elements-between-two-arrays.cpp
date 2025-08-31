class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int cnt1=0,cnt2=0;
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        for(auto it:nums1){
            if(s2.count(it))cnt1++;
        }
        for(auto it:nums2){
            if(s1.count(it))cnt2++;
        }
        return {cnt1,cnt2};
    }
};