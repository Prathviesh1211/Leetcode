class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n=s.size(),m=p.size();
        if(n<m)return ans;
        vector<int> f1(26,0),f2(26,0);
        for(char c:p){
            f1[c-'a']++;
        }
        for(int i=0;i<n;i++){
            f2[s[i]-'a']++;
            if(i>=m){
                f2[s[i-m]-'a']--;
            }
            if(f1==f2)ans.push_back(i-m+1);
        }
        return ans;
    }
};