class Solution {
public:
    int minimumRecolors(string s, int k) {
        int n=s.size();
        int ans=INT_MAX;
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W')cnt++;
        }
        ans=min(cnt,ans);
        for(int i=k;i<n;i++){
            if(s[i]=='W')cnt++;
            if(s[i-k]=='W')cnt--;
        ans=min(cnt,ans);
        }
        return ans==INT_MAX?0:ans;
    }
};