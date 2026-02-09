class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        unordered_map<int,int> mpp;
        for(int i:nums1){
            mpp[i]++;
        }
        for(int i:nums2){
            if(mpp.find(i)!=mpp.end()){
                ans.insert(i);
                // mpp.erase(i);
            }
        }
        return vector<int> (ans.begin(),ans.end());
    }
};