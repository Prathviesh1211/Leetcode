class Solution {
public:
using p=pair<int,pair<int,int>>;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        int n=nums1.size();
        int m=nums2.size();
        priority_queue<p,vector<p>,greater<p>> pq;
        for(int i=0;i<min(n,k);i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        while(k>0 && !pq.empty()){
            auto [i,j]=pq.top().second;
            pq.pop();
            ans.push_back({nums1[i],nums2[j]});
            if(j+1<m){
                pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            }
            k--;
        }
        return ans;
    }
};