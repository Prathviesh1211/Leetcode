class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        // vector<vector<int>> ans;
        unordered_map<int,int> lost;
        for(auto &match:arr){
            lost[match[1]]++;
        }
        vector<int> winners,losers;
        for(auto i:arr){
            int winner=i[0];
            int loser=i[1];
            if(lost.find(winner)==lost.end()){
                winners.push_back(winner);
                lost[winner]=2;
            }
            if(lost[loser]==1)losers.push_back(loser);
        }
        sort(winners.begin(),winners.end());
        sort(losers.begin(),losers.end());
        return {winners,losers};
    }
};