typedef pair<int,int> p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> freq;
        priority_queue<p,vector<p>,greater<p>> pq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto [num,cnt]:freq){
            pq.push({cnt,num});
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};