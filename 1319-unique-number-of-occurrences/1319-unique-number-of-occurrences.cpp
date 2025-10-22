class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> temp(2002,0);
        for(int i:arr){
            temp[i+1000]++;
        }
    sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=0 && temp[i]==temp[i-1])return false;
        }
        return true;
    }
};