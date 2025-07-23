class Solution {
public:
    string frequencySort(string s) {
        string res="";
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](const pair<char,int> &a,const pair<char,int> &b){
            return a.second>b.second;
        });
        for(auto p:v){
            res+=string(p.second,p.first);
        }
        return res;
    }
};