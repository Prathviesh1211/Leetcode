class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        if (k > n)
            return {};
        int f1[26] = {0};
        int f2[26] = {0};
        for (char c : p) {
            f1[c - 'a']++;
        }
        vector<int> ans;
        for (int i=0;i<n;i++){
            f2[s[i]-'a']++;
            if(i>=k)f2[s[i-k]-'a']--;
            if(isAnagram(f1,f2))ans.push_back(i-k+1);
        }
            return ans;
    }

    bool isAnagram(int a1[26],int a2[26]){
        for(int i=0;i<26;i++){
            if(a1[i]!=a2[i])return false;
        }
        return true;
    }
};