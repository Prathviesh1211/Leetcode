class Solution {
public:
    int minimumRecolors(string s, int k) {
        int n=s.size();
        int ans=INT_MAX;
        for(int i=0;i<=n-k;i++){
            int cnt=0;
            for(int j=i;j<i+k;j++){
                if(s[j]=='W')cnt++;
            }
            ans=min(ans,cnt);
        }
        return ans==INT_MAX?0:ans;
    }
};