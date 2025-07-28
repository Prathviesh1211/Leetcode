class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int l=0;
        int ans=0;
        for(int r=0;r<s.size();r++){
            if(mpp.count(s[r])){
                while(mpp.count(s[r])){
                    mpp.erase(s[l]--);
                    l++;
                }
            }
            mpp[s[r]]++;
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};