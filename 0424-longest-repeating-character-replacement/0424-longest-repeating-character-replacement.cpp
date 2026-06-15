class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxf=0,ans=0;
        vector<int> f(26,0);
        for(int r=0;r<s.size();r++){
            f[s[r]-'A']++;
            maxf=max(maxf,f[s[r]-'A']);
            while(r-l+1-maxf>k){
                f[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};