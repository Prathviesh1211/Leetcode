class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> mpp;
        for(char c:s)mpp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        } 
        while(!pq.empty()){
            auto [cnt,c]=pq.top();pq.pop();
            ans+=string(cnt,c);
        }
        return ans;
    }
};