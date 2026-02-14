class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mpp;
        int ind=0;
        for(string s:list1){
            mpp[s]=ind;
            ind++;
        }
        ind=0;
        int sum=INT_MAX;
        vector<string> ans;
        for(int i=0;i<list2.size();i++){
            if(mpp.find(list2[i])!=mpp.end()){
                int currSum = i + mpp[list2[i]];
                if(currSum<sum){
                    ans.clear();
                    ans.push_back(list2[i]);
                    sum=currSum;
                }else if(currSum==sum){
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};