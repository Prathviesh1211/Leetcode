class Solution {
public:
    int countDays(int days, vector<vector<int>>& arr) {
        int n=arr.size();
        int cnt=0;
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(auto it:arr){
            if(ans.empty() || ans.back()[1]<it[0])ans.push_back(it);
            else{
                ans.back()[1]=max(ans.back()[1],it[1]);
            }
        }
        int d=0;
        for(auto it:ans){
            cnt+=it[1]-it[0]+1;
        }
        return days-cnt;
    }
};