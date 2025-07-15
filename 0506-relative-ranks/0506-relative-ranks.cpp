class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int pos=1;
        while(!pq.empty()){
            int mark=pq.top().first; 
            int ind=pq.top().second;
            pq.pop();
            if(pos==1)ans[ind]="Gold Medal";
            else if(pos==2)ans[ind]="Silver Medal";
            else if(pos==3)ans[ind]="Bronze Medal";
            else ans[ind]=to_string(pos);
            pos++;
        }
        return ans;
    }
};