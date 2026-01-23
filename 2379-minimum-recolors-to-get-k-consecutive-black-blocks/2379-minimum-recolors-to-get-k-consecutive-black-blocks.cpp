class Solution {
public:
    int minimumRecolors(string s, int k) {
        int n=s.size();
        int ans=INT_MAX;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='W')cnt++;
            if(i>=k && s[i-k]=='W')cnt--;
            if(i>=k-1)ans=min(ans,cnt);
        }
        return ans==INT_MAX?0:ans;
    }
};