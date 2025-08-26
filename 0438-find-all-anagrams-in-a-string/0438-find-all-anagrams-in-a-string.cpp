class Solution {
public:
    bool issame(vector<int> a,vector<int> b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> f1(26,0);
        for(char c:p)f1[c-'a']++;
        int k=p.size();
        if(k>s.size())return {};
        for(int i=0;i<s.size()-k+1;i++){
            vector<int> f2(26,0);
            for(int j=i;j<i+k;j++){
                f2[s[j]-'a']++;
            }
            if(issame(f1,f2))ans.push_back(i);
        }
        return ans;
    }
};