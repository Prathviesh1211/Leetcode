class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans=0;
        int n=citations.size();
        vector<int> count(n+1,0);
        for(int i:citations){
            if(i>n)count[n]++;
            else count[i]++;
        }
        int cnt=0;
        for(int i=n;i>=0;i--){
            cnt+=count[i];
            if(cnt>=i)return i;
        }
        return ans;
    }
};