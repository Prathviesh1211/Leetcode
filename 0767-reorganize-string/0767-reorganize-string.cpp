class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        string res="";
        int ind=0;
        unordered_map<char,int> mpp;
        for(char c:s)mpp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto it:mpp)pq.push({it.second,it.first});
        while(!pq.empty()){
            pair p=pq.top();pq.pop();
            if(res.empty() || res.back()!=p.second){
                res+=p.second;
                p.first--;
                if(p.first>0)pq.push(p);
            }else{
                if(pq.empty())return "";
                pair q=pq.top();pq.pop();
                res+=q.second;
                q.first--;
                if(q.first>0)pq.push(q);
                pq.push(p);6
            }
        }
        return res;
    }
};