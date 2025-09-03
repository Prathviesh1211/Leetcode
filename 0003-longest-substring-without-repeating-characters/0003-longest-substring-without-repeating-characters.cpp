class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int i=0;
        int ans=0;
        for(int j=0;j<s.size();j++){
            if(mpp.count(s[j])){
                while(mpp.count(s[j])){
                    mpp.erase(s[i]);
                    i++;
                }
            }
            mpp[s[j]]++;
            ans=max(ans,j-i+1);
        }        
        return ans;
    }
};