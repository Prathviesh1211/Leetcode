class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int x=0;
        for(string s:arr){
            x+=(s[1]=='-')?-1:1;
        }
        return x;
    }
};