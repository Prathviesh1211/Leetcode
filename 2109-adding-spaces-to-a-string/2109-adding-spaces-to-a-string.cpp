class Solution {
public:
    string addSpaces(string s, vector<int>& arr) {
        int n=arr.size();
        int ind=0;
        string ans="";
        for(int i=0;i<s.size();i++){
           if (ind < n && arr[ind] == i) {
                ans += ' ';
                ind++;
            }
            ans+=s[i];
        }
        return ans;
    }
};